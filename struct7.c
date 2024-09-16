#include<stdio.h>

// structure decleration

struct Hello
{
    int k;
    int l;
};
struct Demo
{
    int i;
    int j;
    struct Hello Hobj;  // we can create a structure object as members of structure
};
int main()
{
    struct Demo obj1;
    obj1.i = 10;
    obj1.j = 20;
    obj1.Hobj.k = 31;
    obj1.Hobj.l = 41;

    printf("value of Hobj.l is : %d\n",obj1.Hobj.l);
    return 0;
}