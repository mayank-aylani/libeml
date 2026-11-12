#include<utils.h>
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"Usage [test_to_double string]"<<endl;
return 0;
}
string str(argv[1]);
eml::trim(str);
cout<<"Trimmed("<<str<<")"<<endl;
return 0;
}