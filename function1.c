#include<stdio.h>

// function 
int Addition(int i,int j)
{
    int ans = 0;
    ans = i + j;
    return ans;
}

int main()
{
    // Demonstrain of function 
    int No1 = 10;
    int No2 = 11;
    int iRet = 0;
    iRet = Addition(No1,No2);
    printf("Addition of No1 and No2 is : %d\n",iRet);

    return 0;
}