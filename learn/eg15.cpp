#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
int k;
k=v.capacity();
int count;
for(int i=1;i<=10000000;++i)
{
v.push_back(1);
if(k!=v.capacity())
{
count++;
k=v.capacity();
}
}
cout<<"Number of times resized : "<<count<<endl;
return 0;
}