#include<stdio.h>

// structure decleration
struct Demo
{
    int i;
    int j;
};
int main()
{
    // we can create a array of structure object
    struct Demo arr[3];
    arr[0].i = 10;
    arr[0].j = 11;

    arr[1].i = 20;
    arr[1].j = 21;

    arr[2].i = 30;
    arr[2].j = 31;

    printf("value os arr[2].j is : %d\n",arr[2].j);
    return 0;
}