#include<stdio.h>

int main()
{
    short int i = 10;
    long int j=20;

    signed int p = -2;
    unsigned q = 40;

    printf("Size Of Short i Is :%d bytes\n",sizeof(i));
    printf("Size Of long j is : %d bytes\n",sizeof(j));

    printf("Value Of signed variable p is : %d\n",p);
    printf("Value of unsigned Varible q is : %d\n",q);


    return 0;
}