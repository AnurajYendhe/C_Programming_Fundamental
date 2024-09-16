#include<stdio.h>

int main()
{
    // demonstration of poniter
    int No = 11;
    int *ip = &No;

    printf("Value of No is : %d\n",No);
    printf("Address of No is : %d\n",&No);

    printf("Value of ip is : %d\n",ip);
    printf("Address of ip is : %d\n",&ip);

    printf("data ponited by the ip is : %d\n",*ip);

    printf("size of No is : %d\n",sizeof(No));
    printf("size of ip is : %d\n",sizeof(ip));
    
    return 0;
}