#include<stdio.h>

int main()
{
    int i=10, j=0;

    j=--i;

    printf("Pre Decrement\n");
    printf("Value Of i: %d\n",i);
    printf("Value Of j: %d\n",j);
    
    j=0,i=10;

    j=i--;

    printf("Post Decrement\n");
    printf("Value Of i: %d\n",i);
    printf("Value Of j: %d\n",j);
    

    return 0;
}