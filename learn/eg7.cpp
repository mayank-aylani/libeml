#include<iostream>
#include<sstream>
using namespace std;
int main()
{
string line=",abcd,pqrst, ,lmnop,,rstu,";
stringstream ss(line);
string part;
cout<<line<<endl;
while(getline(ss,part,','))
{
cout<<"["<<part<<"]"<<endl;
}
return 0;
}