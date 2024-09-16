#include<stdio.h>

// structure decleration
struct Demo
{
    int i;
    int j;
    int arr[3]; // we can create a array as members of structure
};
int main()
{
    struct Demo obj1;
    obj1.i = 10;
    obj1.j = 20;
    obj1.arr[0] = 51;
    obj1.arr[1] = 61;
    obj1.arr[2] = 71;

    printf("value of arr[2] is : %d\n",obj1.arr[2]);
    return 0;
}