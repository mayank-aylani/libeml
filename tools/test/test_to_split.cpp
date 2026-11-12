#include<utils.h>
#include<iostream>
#include<stdint.h>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
if(argc!=2)
{
cout<<"Usage [test_to_split string]"<<endl;
return 0;
}
string str(argv[1]);
uint32_t comma_count;
vector<string> splits=eml::split(str,',',comma_count);
cout<<"Comma count : "<<comma_count<<endl;
cout<<"The splits are : "<<endl;
for(string s:splits) cout<<"("<<s<<")"<<endl;
return 0;
}