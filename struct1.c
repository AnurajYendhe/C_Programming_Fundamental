#include<stdio.h>

// structure decleration
struct Demo
{
    int i;
    float k;
    int j;
};
int main()
{
    // Demonstrain of structor
    struct Demo obj1; // objection creation
    printf("size of obj1 is : %d\n",sizeof(obj1));
    obj1.i = 10; // member by member initizational
    obj1.k = 90.9;
    obj1.j = 21;

    printf("obj1.i : %d\n",obj1.i); // . is consider as direct members accessing operator
    printf("obj1.k : %d\n",obj1.k);
    printf("obj1.j : %d\n",obj1.j);

    struct Demo obj2 = {21,78.78f,51}; // members initizational list
    printf("obj2.i : %d\n",obj2.i);
    printf("obj2.k : %d\n",obj2.k);
    printf("obj2.j : %d\n",obj2.j);

    return 0;
}