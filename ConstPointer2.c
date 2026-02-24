#include<stdio.h>
int main()
{
    const int i = 10;
    int j = 20;
     const int *ptr = &i; // Const tells compiler we are pointing constant variable

   i = 20; // Not Allowed
   ptr = &j; // allowed

    
    return 0;
}