#include<stdio.h>

union Demo
{
    int i;  // 4byte
    double d;
};
int main()
{
    union Demo obj1;
    printf("size of obj1 is : %d\n",sizeof(obj1)); // 8 byte (allocate memory for longest members only)
    
    return 0;
}