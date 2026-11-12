//iostream contains prototype of some function
//some declarations (macro,variable etc)
//and some object declaration
#include<iostream>
#include<fstream>
//iostream contains a namespace named as std
//likewise fstream contains a namespace named as std
using namespace std;
int main()
{
//ifstream is a class
std::ifstream ff("abcd.csv");
if(ff.is_open()==false)
{
cout<<"Unable to open abcd.csv"<<endl;
return 0;
}
string str;  //string is a class
while(getline(ff,str))  //getline returns a boolean value true, if it is able to read line
{
cout<<str<<endl;
}
ff.close();
return 0;
}