#include<stdio.h>

int main()
{
    // Demonstrain of pointer to Array
    int arr[5] = {10,20,30,40,50};
    int *p = arr; // arr is internaly consider as it's base address(ie., &arr)
    printf("Address of arr is : %d\n",&arr);
    printf("Value of p is : %d\n",p);
    printf("value of arr[0] is : %d\n",*p);
    return 0;
}