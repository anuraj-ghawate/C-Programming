#include<stdio.h>
#include<fcntl.h> //file contrlol

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable To Create The File\n");
    }
    else
    {
        printf("File Gets Created With fd : %d \n",fd);
    }

    return 0;
}