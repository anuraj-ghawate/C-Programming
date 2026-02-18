#include<stdio.h>

int main()
{
    char ch='A';
    int i=10;
    float f=3.14f;
    double d=12.3456543;

    printf("Address Of ch Is : %d\n",&ch);
    printf("Address Of i Is :%d\n",&i);
    printf("Address Of f Is: %d\n",&f);
    printf("Address Of d IS : %d",&d);


    return 0;
}