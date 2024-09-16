#include<stdio.h>

int main()
{
    // Demonstrain of void pointer
    int No = 10;
    int *ip = &No; // specific pointer
    void *vp = &No; // void pointer (grneric pointer) storge address of any data type
    printf("%d\n",ip);
    printf("%d\n",vp);

    float f = 10.32f;
    vp = &f;
    printf("%d\n",vp);

    return 0;
}