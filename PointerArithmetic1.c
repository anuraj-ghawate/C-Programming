#include<stdio.h>

int main()
{
    //Pointer Arithmetic pointer + number
    int arr[] = {11,21,51,101};
    int *p = &(arr[1]);
    int *q = &(arr[3]);

    printf("*p is : %d\n",*p);
    printf("p is : %d\n",p);
    printf("Pointer + Number\n");
    p=p+2;
    printf("p+2 is : %d\n",*p);
    printf("p is %d\n",p);

    return 0;
}