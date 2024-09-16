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
    printf("size of obj1 is : %d\n",sizeof(obj1)); 

    obj1.i = 10;
    printf("obj1.i : %d\n",obj1.i);

    // initize member by using initization list
    struct Demo obj2 = {21,51.98f,11};
    printf("obj2.i : %d\n",obj2.i);

    return 0;
}