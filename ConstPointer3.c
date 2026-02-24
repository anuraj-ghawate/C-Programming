#include<stdio.h>
int main()
{
    int i = 10;
    int j = 20;
    int *const ptr = &i; // pointer is constant

   i = 20; //  Allowed
   ptr = &j; // not allowed

    
    return 0;
}