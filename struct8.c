#include<stdio.h>

// structure decleration


struct Demo
{
    int i;
    int j;
    struct Hello // nested structure 
    {
        int k;
        int l;
    }Hobj;  
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