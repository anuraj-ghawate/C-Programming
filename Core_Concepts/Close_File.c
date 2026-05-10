#include<stdio.h>
#include<fcntl.h> //file contrlol
#include<unistd.h> //(universal standerd.h) this contians unlink 

int main()
{
   int fd = 0;

   fd = open("Marvellous.txt",O_RDWR);
   if(fd == -1)
   {
    printf("Unable To Open File");
   }
   else
   {
    printf("File Gets Opened With fd : %d\n",fd);
   }

   close(fd);
    return 0;
}
