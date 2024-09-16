#include<stdio.h>

int main()
{
    // subtraction of two integer from pointer 
    int Arr[5] = {10,20,30,40,50};

    int *ptr1 = NULL;
    ptr1 = &(Arr[3]); 
    printf("Address of Arr is : %d\n",&Arr);
    printf("%d\n",ptr1 - 2);
    printf("Value of ptr1 is : %d\n",ptr1);
    
    return 0;
}