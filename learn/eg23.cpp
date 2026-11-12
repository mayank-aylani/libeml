#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int> v1={10,20,30};
cout<<v1.capacity()<<endl;
vector<int> v2={5,10,540,30,340,340,350,340};
//code to append v2 to v1
v1.insert(v1.end(),v2.begin(),v2.end());
for(auto j:v1) cout<<j<<endl;
return 0;
}