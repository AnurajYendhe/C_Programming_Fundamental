#include<stdio.h>

int main()
{
    // Demonstrain pointer Arithmatic
    int Arr[5] = {10,20,30,40,50};
    int *ptr1 = NULL;
    ptr1 = Arr;
    printf("%d\n",ptr1);
    printf("%d\n",ptr1 + 3);  // address of arr + (3 * sizeof(pointed type)) = 100 + (3 * 4) = 112
    printf("%d\n",ptr1);
    printf("%d\n",(*ptr1) + 3);
    return 0;
}