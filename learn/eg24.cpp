#include<iostream>
using namespace std;
class aaa
{
private:
int *ptr;
int sz;
public:
aaa()
{
ptr=NULL;
sz=0;
}
aaa & operator=(const aaa &other) // copy assignment
{
cout<<"copy assignment got called"<<endl;
return *this;
}
aaa & operator=(aaa &&other) // move assignment
{
cout<<"move assignment got called"<<endl;
this->ptr=other.ptr;
this->sz=other.sz;
other.ptr=NULL;
other.sz=0;
return *this;
}
void put(int n1,int n2,int n3)
{
ptr=new int[3];
ptr[0]=n1;
ptr[1]=n2;
ptr[2]=n3;
sz=3;
}
void print()
{
cout<<"Printing : "<<sz<<" elements"<<endl;
for(int k=0;k<sz;k++) cout<<ptr[k]<<" ";
cout<<endl;
}
};
int main()
{
aaa a;
a.put(10,20,300);
a.print(); // 3 elements
aaa b;
b=move(a);
b.print(); // 3 elements
a.print(); // nothing
return 0;
}