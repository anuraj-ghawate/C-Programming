#include<stdio.h>

int main()
{
    char ch='A';
    int i=10;
    float f=3.14f;
    double d=12.3456543;

    printf("Size Of Character Is : %d\n",sizeof(ch));
    printf("Size Of Integer Is :%d\n",sizeof(i));
    printf("Size Of Float Is: %d\n",sizeof(f));
    printf("Size Of Double IS : %d",sizeof(d));


    return 0;
}