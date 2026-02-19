#include<stdio.h>

int main()
{
    int arr[4] = {10,20,30,40}; //Member Initialization List with Size
    int brr[] = {10,20,30,40};  //Member Initialization List without Size
    int crr[4];                 // Size Specification Compulsary

    crr[0] = 10; // Member By Initialization List
    crr[1] = 20;
    crr[2] = 30;
    crr[3] = 40;

    printf("%d\n",arr[0]);
    printf("%d\n",brr[0]);
    printf("%d\n",crr[0]);

    return 0;
}