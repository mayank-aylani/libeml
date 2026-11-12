#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
string line=" ABCD pqrst MAYANK   ";
cout<<"["<<line<<"]"<<endl;
line.erase(remove(line.begin(),line.end(),' '),line.end());
cout<<"["<<line<<"]"<<endl;
return 0;
}