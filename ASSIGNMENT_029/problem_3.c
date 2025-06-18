// 3. Write a program which accepts file name from user and count number of
// white spaces from that file.
// Input : Demo.txt
// Output : Number of white spaces are 13


#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountWhite(char *fileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0,iCnt = 0,iCntWhite = 0;

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
            if(Buffer[iCnt] == ' ')
            {
                iCntWhite++;
            }
        }
    }

    close(fd);

    return iCntWhite;
}


int main()
{
    int iRet = 0;
    char Fname[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%[^'\n']s",Fname);

    iRet = CountWhite(Fname);

    printf("Number of whitespace characters are : %d",iRet);
    return 0;
}
