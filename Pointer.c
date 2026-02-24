#include<stdio.h>

int main()
{
    int No1 = 11;
    int No2 = 21;
    int No3 = 51;
    int No4 = 101;

    //Array Of Pointers

    int *arr[4]={&No1,&No2,&No3,&No4};

    printf("size of arr is : %d\n",sizeof(arr));
    printf("size of arr[2] is :%d\n",sizeof(arr[2]));
    

    printf("Address Of arr[2] is : %d\n",&(arr[2]));
    printf("Address Of first elemnt of arr is : %d\n",arr);
    printf("Address of Whole Array Is : %d\n",&arr);

    printf("Values In arr is \n");
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);

    printf("Values Of *arr\n");
    printf("%d\n",*(arr[0]));
    printf("%d\n",*(arr[1]));
    printf("%d\n",*(arr[2]));
    printf("%d\n",*(arr[3]));

    return 0;
}