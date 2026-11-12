#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"default constructor"<<endl;
}
aaa(const aaa &)
{
cout<<"copy constructor"<<endl;
}
aaa(aaa &&)
{
cout<<"move constructor"<<endl;
}
};
aaa sam()
{
aaa k;
cout<<&k<<endl; 
return k; // return value optimization will come in action
}
int main()
{
aaa b=sam();
cout<<&b<<endl;
return 0;
}