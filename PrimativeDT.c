#include<stdio.h>

int main()
{
    printf("-------Demonstration of Primative data type----\n");
    char Name = 'A';
    printf("Size of Name : %d\n",sizeof(Name));
    printf("Address of Name : %d\n",&Name);

    int No = 10;
    printf("Size of No : %d\n",sizeof(No));
    printf("Address of No : %d\n",&No);

    float PI = 3.14f;
    printf("Size of PI : %d\n",sizeof(PI));
    printf("Address of PI : %d\n",&PI);

    double percentage = 89.907;
    printf("Size of percentage : %d\n",sizeof(percentage));
    printf("Address of percentage : %d\n",&percentage);

    return 0;
}