#include<stdio.h>

int main()
{
    //Pointer Arithmetic pointer - pointer
    int arr[] = {11,21,51,101};
    int *p = &(arr[1]);
    int *q = &(arr[3]);

    printf("p is : %d\n",p);
    printf("q is : %d\n",q);

    printf("*p is : %d\n",*p);
    printf("*q is : %d\n",*q);

    printf("Distance Between q and p is : %d\n",q-p);


    return 0;
}