#include<stdio.h>
#include<fcntl.h> //file contrlol
#include<unistd.h> //(universal standerd.h) this contians unlink 

int main()
{
   int fd = 0;

   int Ret = 0;

   char Arr[20];
    
   fd = open("Marvellous.txt",O_RDWR);

   if(fd == -1)
   {
    printf("Unable To Open File");
   }
   else
   {
    printf("File Gets Opened With fd : %d\n",fd);

    Ret = read(fd,Arr,6);
    printf("%d bytes gets read from file\n",Ret);
    printf("%s\n",Arr);

    }

    close(fd);
    return 0;
}