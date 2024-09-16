#include<stdio.h>

int main()
{
    // Addition of two pointer (Error : it generate out of bound address) 
    int Arr[5] = {10,20,30,40,50};

    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = &(Arr[0]);
    ptr2 = &(Arr[2]);
    // printf("%d\n",ptr1 + ptr2); not allowed
    printf("%d\n",(*ptr1) + (*ptr2)); // allowed 10 + 30 = 40
    
    return 0;
}