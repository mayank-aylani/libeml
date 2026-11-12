#include<utils.h>
#include<iostream>
#include<stdint.h>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"Usage [test_split_2 string]"<<endl;
return 0;
}
string str(argv[1]);
vector<double> doubles=eml::split(str,',');
cout<<"The doubles are : "<<endl;
for(double d:doubles) cout<<"("<<d<<")"<<endl;
return 0;
}