#include<iostream>
#include<sstream>
using namespace std;
int main()
{
string line="abcd,pqrst,lmnop,rstu";
stringstream ss(line);
string part;
while(getline(ss,part,','))   //third argument specify ',' as delimiter instead of \0 or \n
{
cout<<"["<<part<<"]"<<endl;
}
return 0;
}
