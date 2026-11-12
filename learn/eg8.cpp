#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string line=" ABCD pqrst MAYANK   ";
cout<<"["<<line<<"]"<<endl;
remove(line.begin(),line.end(),' ');
cout<<"["<<line<<"]"<<endl;
return 0;
}