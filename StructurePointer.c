#include<stdio.h>
  
struct Demo
{
    int i;      //4
    int *ptr;   //8
};

int main()
{
   struct Demo dobj;

   printf("Size Of Object : %lu\n",sizeof(dobj)); //either 8 or 16


    return 0;
}