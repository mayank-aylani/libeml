#include<stdio.h>
int main()
{
int x,y;
char m;
int *p;
int *q;
char *z;
printf("%lu\n",&x);
printf("%lu\n",&y);
printf("%lu\n",&m);
p=new int;
q=new int;
z=new char;
printf("%lu\n",&p);
printf("%lu\n",&q);
printf("%lu\n",&z);
return 0;
}