#include<utils.h>
#include<iostream>
using namespace std;
using namespace eml;
int main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"Usage [test_to_double string]"<<endl;
return 0;
}
//string str;  //bug
string str(argv[1]);
try
{
double value=to_double(str);
cout<<"Double value : "<<value<<endl;
}catch(invalid_argument i)
{
cout<<i.what()<<endl;
}
return 0;
}