#include<stdio.h>

int main()
{
    //Pointer Of Array
    int arr[] = {11,21,51,101};
    int *p = arr;
    int *q = &(arr[3]);

    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(q));

    printf("Size Of Arr: %d\n",sizeof(arr));
    printf("Size Of *p: %d\n",sizeof(*p));
    printf("Size Of *q: %d\n",sizeof(*q));

    printf("Value of p is: %d\n",p);
    printf("value of q is: %d\n",q);

    printf("address of arr[0] is : %d\n",arr);
    printf("address of arr[3] is :%d\n",&(arr[3]));

    printf("value of *p is: %d\n",*p);
    printf("Value of *q is: %d\n",*q);

    printf("p[2] is %d\n",p[2]);
    printf("*(arr+3) is :%d\n",*(arr+3));
    printf("1[arr] is : %d\n",1[arr]);




    return 0;
}