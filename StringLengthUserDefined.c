#include<stdio.h>

//Call by Address
int strlenX(char *ptr) //100
{
    int i = 0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }

    return i;
}
int main()
{
   char str[] = "Ganesh";  //100
  
   int Ret = 0;

   Ret = strlenX(str);

   printf("String Length Is : %d\n",Ret);


    return 0;
}