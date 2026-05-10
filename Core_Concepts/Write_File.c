#include<stdio.h>
#include<fcntl.h> //file contrlol
#include<unistd.h> //(universal standerd.h) this contians unlink 

int main()
{
   int fd = 0;

   int Ret = 0;

   char Arr[] = "Marvellos Infosystems";
    
   fd = open("Marvellous.txt",O_RDWR);

   if(fd == -1)
   {
    printf("Unable To Open File");
   }
   else
   {
    printf("File Gets Opened With fd : %d\n",fd);

    Ret = write(fd,Arr,10);
    printf("%d bytes gets written into file\n",Ret);

    
   }

   close(fd);
    return 0;
}
