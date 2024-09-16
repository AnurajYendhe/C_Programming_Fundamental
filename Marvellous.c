#include<stdio.h> // inbuilt header file
#include"Marvellous.h" // user define header file
#pragma pack(1)

int main()
{
    #define PI 3.14 // Macro its written in capital letter's
    printf("Value of PI is : %f\n",PI);
    struct Demo obj;
    obj.i = 10;
    obj.f = 89.89f;

    printf("value of obj.i is : %d\n",obj.i);
    printf("size of obj is %d\n",sizeof(obj));

    printf("rate of interst is : %f\n",ROI);
    printf("Fees of LB batch is : %d\n",FEES);

    return 0;
}