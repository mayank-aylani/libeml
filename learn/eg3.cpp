#include<iostream>
#include<string>
using namespace std;
int main()
{
string a;
cout<<"Enter a string : ";
cin>>a;  //console input
double d;
d=std::stod(a);
cout<<"double value : "<<d<<endl;
return 0;
}