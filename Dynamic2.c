/// Demonstration of realloc function
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    // allocate the memory
    ptr = (int*)malloc(sizeof(int)*5);
    //reallocate the memory
    ptr = (int*)realloc(ptr,sizeof(int)*7);
    // deallocate the memory
    free(ptr);
    return 0;
}