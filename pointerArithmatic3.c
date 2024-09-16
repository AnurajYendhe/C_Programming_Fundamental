#include<stdio.h>

int main()
{
    // subtraction of two integer from pointer 
    int Arr[5] = {10,20,30,40,50};

    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = &(Arr[0]); 
    ptr2 = &(Arr[3]);
    printf("%d\n",ptr2 - ptr1);
    printf("%d\n",ptr1 - ptr2);

    return 0;
}