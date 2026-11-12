#include<forward_list>
using namespace std;
int main()
{
forward_list<int> f;
auto i=f.before_begin();
i=f.insert_after(i,10);
i=f.insert_after(i,33);
return 0;
}