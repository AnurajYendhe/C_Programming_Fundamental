#include<stdio.h>

int main()
{
    // Demonstrain of pointer 
    int No = 11;
    int *ptr = &No;

    printf("Value of No is : %d\n",No);
    printf("Address of No is : %d\n",&No);
    printf("size of No is : %d\n",sizeof(No));

    printf("Value of ptr is : %d\n",ptr);
    printf("Address of ptr is : %d\n",&ptr);
    printf("size of ptr is : %d\n",sizeof(ptr));

    // we can fatch data using pointer 
    printf("value of No is %d\n",*ptr);

    return 0;
}