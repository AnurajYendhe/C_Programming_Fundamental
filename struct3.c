#include<stdio.h>

// structure decleration
struct Demo
{
    int i;
    float k;
    int j;
}obj1; // create object at end of structure decleration
int main()
{
    // we can create pointer which holdes the address of structure object
    printf("Address of obj1 is : %d\n",&obj1);
    struct Demo *ptr = &obj1;
    printf("Value of ptr is : %d\n",ptr);

    // indirect initization using pointer
    ptr -> i = 11;
    printf("obj1.i : %d",obj1.i);
    return 0;
}