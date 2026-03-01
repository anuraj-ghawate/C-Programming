#include<stdio.h>
  
struct Hello
{
    float f;        //4
    int arr[3];     //12
}hobj;              //16

int main()
{
    printf("Size Of Object is : %lu\n",sizeof(hobj));  //16
    
    return 0;
}