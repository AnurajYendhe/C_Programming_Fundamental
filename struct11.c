#include<stdio.h>

// padding

struct Demo
{
    int i;  // 4byte
    char c;
};
int main()
{
    struct Demo obj1;
    printf("size of obj1 is : %d\n",sizeof(obj1)); // 8 byte is called padding
    
    return 0;
}