#include<stdio.h> 

// typedef Old_Name New_Name;
typedef const int CINT;

int main()
{
    int j = 12;
    const int i = 11; // Normal const int
    CINT No = 10;
    printf("Value of i is : %d\n",i);
    printf("Value of No is : %d\n",No);
    printf("Value of j is : %d\n",j);
    j++;
    // No++; it's const int
    printf("Value of No is : %d\n",No);
    printf("Value of j is : %d\n",j);

    
    return 0;
}