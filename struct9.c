#include<stdio.h>

// structure decleration


struct Demo
{
    int i;  // 4byte
    struct Demo *p; // 8byte self-referilzational structure
};
int main()
{
    struct Demo obj1;
    printf("size of obj1 is : %d\n",sizeof(obj1));
    obj1.i = 21;
    obj1.p = &obj1;
    printf("Address of obj1 is : %d\n",&obj1);
    printf("value of p is : %d\n",obj1.p);
    printf("value of i is : %d\n",obj1.p -> i);
    
    return 0;
}