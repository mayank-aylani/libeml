#include<iostream>
#include<fstream>
using namespace std;
int main(int c,char *v[])  //command line argument
{
if(c!=2)     // program_name.exe  abcd.csv
{
cout<<"Usage [eg2 name_of_csv_file]"<<endl;
return 0;
}
std::ifstream ff(v[1]);
if(ff.is_open()==false)
{
cout<<"Unable to open "<<v[1]<<endl;
return 0;
}
string str;
while(getline(ff,str))  //getline returns a boolean value if it is able to read line
{
cout<<str<<endl;
}
ff.close();
return 0;
}