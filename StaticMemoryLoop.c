#include<stdio.h>

int main()
{   
    float marks[5];

    int i = 0; //loop counter

    printf("Enter You Marks : \n");
    //iteration
    //      1       2   3
    for(i = 0; i < 5 ; i++)
    {
    scanf("%f",&marks[i]);   //4
    }

    printf("Entered Marks Are : \n");
    
    //      1       2   3
    for(i = 0; i < 5 ; i++) 
    {
        printf("%f\n",marks[i]);    //4
    };
    return 0;
}