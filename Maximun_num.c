#include<stdio.h>

int Maximun(int value1,int value2)
{
    if(value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}
int main()
{
    // find Maximun of two numbers
    int No1 = 0,No2 = 0,iRet = 0;
    printf("Enter the first numbers : ");
    scanf("%d",&No1);
    printf("Enter the second numbers : ");
    scanf("%d",&No2);

    iRet = Maximun(No1,No2);
    printf("Maximun number is %d",iRet);
    return 1;
}