#include<utils.h>
#include<utils.cpp>  //will be removed once library is created
#include<fstream>
#include<vector>
#include<stdint.h>
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
using namespace eml;
class NDArray
{
private:
vector<double> data;
vector<uint64_t> dimensions;
vector<uint64_t> indexComputationData;
NDArray(){}
public:
NDArray(vector<uint64_t> d)
{
dimensions=d;
uint64_t product=accumulate(dimensions.begin(),dimensions.end(),1,multiplies<uint64_t>());  //all numbers of dimensions vector
data.resize(product);
indexComputationData.resize(dimensions.size());
uint64_t acc=1;
int i;
for(i=dimensions.size()-1;i>=0;--i)
{
indexComputationData[i]=acc;
acc=acc*dimensions[i];
}
}
void set(const vector<uint64_t> &indexes,const double value)
{
//validation pending
uint64_t idx;
idx=0;
for(uint64_t i=0;i<indexes.size();++i)
{
idx=idx+(indexes[i]*indexComputationData[i]);
}
data[idx]=value;
cout<<"In set : "<<idx<<endl;
}
double get(const vector<uint64_t> &indexes)
{
//validation pending 
uint64_t idx;
idx=0;
for(uint64_t i=0;i<indexes.size();++i)
{
idx=idx+(indexes[i]*indexComputationData[i]);
}
cout<<"In get : "<<idx<<endl;
return data[idx];
}
static NDArray from_2d_csv(const string &csv_name,uint32_t skip_lines)
{
ifstream file(csv_name);
if(!file.is_open()) throw string("csv not found");
string line;
int i=1;
while(i<=skip_lines)
{
if(!getline(file,line))
{
file.close();
throw string("Invalid value of skip lines");
}
i++;
}
vector<double> v;
uint64_t rows,columns;
vector<double> data;
rows=0;
i=0;
while(getline(file,line))
{
v=split(line,',');
if(rows==0)
{
columns=v.size();
}
data.insert(data.end(),v.begin(),v.end());
rows++;
}
file.close();
NDArray ndarray;
ndarray.data=move(data);
ndarray.dimensions.push_back(rows);
ndarray.dimensions.push_back(columns); ndarray.indexComputationData.resize(ndarray.dimensions.size());
uint64_t acc=1;
for(i=ndarray.dimensions.size()-1;i>=0;--i)
{
ndarray.indexComputationData[i]=acc;
acc=acc*ndarray.dimensions[i];
}
return ndarray;
}
void print()
{
int i=0;
for(int r=0;r<dimensions[0];++r)
{
for(int c=0;c<dimensions[1];c++)
{
cout<<data[i]<<" ";
i++;
}
cout<<endl;
}
}
};
void test_set()
{
NDArray arr1({2,3,4});
uint64_t i1,i2,i3;
double v=10.0;
for(i1=0;i1<2;++i1)
{
for(i2=0;i2<3;++i2)
{
for(i3=0;i3<4;++i3)
{
arr1.set({i1,i2,i3},v);
v+=5.0;
}
}
}
}//test_set ends


/*
int main()
{
test_set();
return 0;
}*/


int main()
{
try
{
NDArray arr=NDArray::from_2d_csv("iceCreamSales.csv",1);
arr.print();  //print will be removed at later stage
}catch(string &message)
{
cout<<message<<endl;
}
return 0;
}