#include<stdio.h>

int main()
{
    //Pointer Arithmetic pointer - number
    int arr[] = {11,21,51,101};
    int *p = &(arr[1]);
    int *q = &(arr[3]);

    printf("*q is : %d\n",*q);
    printf("q is : %d\n",q);
    printf("Pointer - Number\n");
    q=q-3;
    printf("q-3 is : %d\n",*q);
    printf("q is %d\n",q);

    return 0;
}