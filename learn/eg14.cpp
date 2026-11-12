#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
for(int i=1;i<=100;++i)
{
cout<<"Before : size "<<v.size()<<" and capacity "<<v.capacity()<<endl;
v.push_back(1);
cout<<"After : size "<<v.size()<<" and capacity "<<v.capacity()<<endl;
}
return 0;
}