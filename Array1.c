#include<stdio.h>

int main()
{
    int Arr[5];
    // we can initilize array using member initilization
    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 40;
    Arr[4] = 50;

    printf("Arr[0] : %d\n",Arr[0]);
    printf("Arr[1] : %d\n",Arr[1]);
    printf("Arr[2] : %d\n",Arr[2]);
    printf("Arr[3] : %d\n",Arr[3]);
    printf("Arr[4] : %d\n",Arr[4]);

    printf("Address of Arr is : %d\n",&Arr);
    printf("Address of Arr is : %d\n",Arr);  // name of array is internaly consider as address of array

    printf("Address of Arr[0] is : %d\n",&Arr[0]); // sequancy memory allocate
    printf("Address of Arr[1] is : %d\n",&Arr[1]);
    printf("Address of Arr[2] is : %d\n",&Arr[2]);

    printf("size of Arr is %d\n",sizeof(Arr)); // (size of each data type * numbers of data)

    // we can initilize array using initilization list
    int Arr2[5] = {1,2,3};
    printf("Arr2[0] : %d\n",Arr2[0]);
    printf("Arr2[1] : %d\n",Arr2[1]);
    printf("Arr2[2] : %d\n",Arr2[2]);
    printf("Arr2[3] : %d\n",Arr2[3]); // defult set 0 but only applicable initilization list only
    printf("Arr2[4] : %d\n",Arr2[4]);

    return 0;
}