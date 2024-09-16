#include<stdio.h>

int main()
{
    // demonstration of multiple poniter or pointer to pointer
    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int *****z = &y;

    printf("%d\n",No);
    printf("%d\n",&No);
    printf("%d\n",y);
    printf("%d\n",**x);
    printf("%d\n",&x);
    printf("%d\n",&z);
    printf("%d\n",***z);
    printf("%d\n",**q);
    printf("%d\n",&q);
    printf("%d\n",*p);
    printf("%d\n",sizeof(z));
    printf("%d\n",&(**q));
    printf("%d\n",&(*p));
    printf("%d\n",*****z);
    printf("%d\n",****y);
    
    return 0;
}