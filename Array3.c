#include<stdio.h>

int main()
{
    // Demonstrain multidimensional array(array of array)
    int Arr[2][3] = {1,2,3,4,5,6};
    printf("Arr[0][0] is : %d\n",Arr[0][0]);
    printf("Arr[0][1] is : %d\n",Arr[0][1]);
    printf("Arr[0][2] is : %d\n",Arr[0][2]);
    printf("Arr[1][0] is : %d\n",Arr[1][0]);
    printf("Arr[1][1] is : %d\n",Arr[1][1]);
    printf("Arr[1][2] is : %d\n",Arr[1][2]);

    printf("size of Arr is : %d\n",sizeof(Arr)); // 2 * 3 * 4 = 24

    return 0;
}