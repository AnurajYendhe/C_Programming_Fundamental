#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr1[5]; // static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    // allocate the memory
    ptr = (int*)malloc(sizeof(int) * size);
    printf("Enter the elements : \n");
    for(int i = 0;i < size;i++)
    {
        int x = 0;
        scanf("%d",&x);
        ptr[i] = x;
    };
    printf("elements in array is : \n");
    for(int j = 0;j < size;j++)
    {
        printf("%d\n",ptr[j]);
    };
    free(ptr);
    return 0;
}