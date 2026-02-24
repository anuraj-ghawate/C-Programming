#include<stdio.h>
int main()
{
    int i = 10;
    int j = 20;
    int *ptr = &i;

    i = 11; // allowed
    ptr = &j; //allowed

    return 0;
}