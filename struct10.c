#include<stdio.h>

// we can create connected node using self-referilzational structure


struct Demo
{
    int i;
    struct Demo *p;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
    struct Demo obj4;

    struct Demo *head = &obj1;

    obj1.i = 10;
    obj1.p = &obj2;

    obj2.i = 20;
    obj2.p = &obj3;

    obj3.i = 30;
    obj3.p = &obj4;

    obj4.i = 40;
    obj4.p = NULL;
    
    return 0;
}