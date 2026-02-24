#include<stdio.h>
int main()
{
    const int i = 10;
    int j = 20;
    const int *const ptr = &i; 
    int const *const ptr = &i;
    //line no 6 and 7 are same but syntatctically diffrent 
     
   i = 20;  // not allowed 
   ptr = &j; // not allowed 

    
    return 0;
}