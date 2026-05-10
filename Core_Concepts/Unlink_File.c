#include<stdio.h>
#include<fcntl.h> //file contrlol
#include<unistd.h> //(universal standerd.h) this contians unlink 

int main()
{
   unlink("Marvellous.txt");
    return 0;
}
