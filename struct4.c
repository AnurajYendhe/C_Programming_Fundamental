#include<stdio.h>

// structure decleration
struct Demo
{
    int i;
    float k;
    int *j; // we can create a pointer as a members of structure
};
int main()
{
    int no = 10;

    struct Demo obj1;
    obj1.i = 11;
    obj1.k = 89.789f;
    obj1.j = &no;

    printf("Address of no is : %d\n",&no);
    printf("obj1.j : %d\n",obj1.j);
    printf("Value of no is %d\n",*obj1.j); // by using pointer
    return 0;
}