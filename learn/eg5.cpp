#include<iostream>
int main()
{
std::string a;
std::cout<<"Enter a string : ";
std::cin>>a;
double d;
size_t var;   //size_t means usigned only (0 and positive numbers)
try
{
d=std::stod(a,&var); //converts the string a into a double
// It also stores the index of the first unconverted character into var
// For example, if the input is "12.34abc", var will be 5 (the index of 'a')
if(a[var]=='\0')
{
std::cout<<"Double value : "<<a<<std::endl;
}
else
{
std::cout<<"Invalid data : "<<a<<std::endl;
}
}catch(std::invalid_argument k)
{
std::cout<<"Exception raised"<<std::endl;
std::cout<<"Invalid data : "<<a<<std::endl;
}
return 0;
}