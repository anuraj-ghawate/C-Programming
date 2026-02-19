#include<stdio.h>

int main()
{
    int i = 11;
    short int j = 11;
    long int k = 11;

    printf("Size Of int : %lu\n",sizeof(i));  // 4
    printf("Size Of short int : %lu\n",sizeof(j)); // 2
    printf("Size Of long int k : %lu\n",sizeof(k)); // 4 or 8
    return 0;
}