#include<stdio.h>

int main()
{
    // Demonstrain of const
    int No1 = 11;
    const int No2 = 10;
    
    printf("value of No1 is %d\n",No1);
    No1++; // short hand operator (++ incremental, -- decermental)
    printf("value of No1 is %d\n",No1);

    printf("value of No1 is %d\n",No2);
    // No2++; we can't change value of const variables
    printf("value of No1 is %d\n",No2);
    
    return 0;
}