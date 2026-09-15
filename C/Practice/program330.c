#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // Only LINUX based os

int main()
{
    int fd = 0;
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gete succesfully opened with fd : %d\n",fd);

        iRet = write(fd,"Jay Ganesh...",13);

        printf("%d bytes gets succesfully written \n",iRet);
        
        close(fd);
    }

    return 0;
}