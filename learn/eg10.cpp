#include<iostream>
#include<sstream>
#include<list>
using namespace std;
int main()
{
list<string> parts;
string line=" ,abcd,,pqrst, ,lmnop,rstu,";
stringstream ss(line);
string part;
int number_of_commas=0;
while(getline(ss,part,','))
{
number_of_commas++;
cout<<"["<<part<<"]"<<endl;
//auto k=parts.insert(part);
parts.push_back(part);
}
cout<<"Line : ["<<line<<"]"<<endl;
cout<<(line.c_str()[line.length()-1]!=',')<<endl;
if(line.c_str()[line.length()-1]!=',')
{
number_of_commas--;
}
cout<<"Number of commas : "<<number_of_commas<<endl;
cout<<"Parts are as follows : "<<endl;
for(string pp:parts) cout<<pp<<endl;
return 0;
}