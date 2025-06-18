// 1. Write a program which accepts file name from user and count number of
// capital characters from that file.
// Input : Demo.txt
// Output : Number of capital characters are 23

#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountCapital(char *fileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0,iCnt = 0,iCapCount = 0;

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("error Invalid filename ");
        return -1;
    }

    while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
            {
                iCapCount++;
            }
        }
    }

    close(fd);

    return iCapCount;
}


int main()
{
    int iRet = 0;
    char Fname[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%[^'\n']s",Fname);

    iRet = CountCapital(Fname);

    printf("Number of capital characters are : %d",iRet);
    return 0;
}