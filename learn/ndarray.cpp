#include<vector>
#include<stdint.h>
#include<iostream>
using namespace std;
class NDArray
{
private:
vector<double> data;
vector<uint64_t> dimensions;
};
int main()
{
/*
option:1
write a constructor that accepts variable number of arguments
NDArray arr1(15);
NDArray arr1(7,3);
NDArray arr1(8,9,10,11);
*/
/*
option:2
user creates a vector and passes it to constructor
vector<int> v1;
v1.push_back(15);
vector<int> v2;
v2.push_back(7);
v2.push_back(3);
vector<int> v3;
v2.push_back(8);
v2.push_back(9);
v2.push_back(10);
v2.push_back(11);
NDArray arr1(v1);
NDArray arr1(v2);
NDArray arr1(v3);
*/
/*
option:3
option 2 with different syntax
vector<int> k={10,20,30,40,50,60};
NDArray arr1({15});
NDArray arr2({7,3});
NDArray arr3({8,9,10,11});
*/
return 0;
}