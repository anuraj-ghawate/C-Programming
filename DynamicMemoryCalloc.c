#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int size = 0;
    int i = 0; //loop counter
    float *marks = NULL;
    printf("Enter Number Of Elements : \n");
    scanf("%d",&size);

    //Dynamic Meory Allocation
    marks=(float*)calloc(size,sizeof(float));

    printf("Enter You Marks : \n");
    //iteration
    //      1       2   3
    for(i = 0; i < size ; i++)
    {
    scanf("%f",&marks[i]);   //4
    }

    printf("Entered Marks Are : \n");
    
    //      1       2   3
    for(i = 0; i < size ; i++) 
    {
        printf("%f\n",marks[i]);    //4
    }

    free(marks);

     return 0;
}