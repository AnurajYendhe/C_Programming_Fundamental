#include<stdio.h>

int main()
{
    // Demonstrain Array of pointer
    int No1 = 10,No2 = 11,No3 = 30,No4 = 40; 
    int *arr[4] = {&No1,&No2,&No3,&No4};

    printf("%d\n",arr); // address of arr
    printf("%d\n",arr[0]);
    printf("%d\n",No1);
    printf("%d\n",&No3);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(No2));
    printf("%d\n",&arr[3]);
    printf("%d\n",*arr[3]);
    return 0;
}