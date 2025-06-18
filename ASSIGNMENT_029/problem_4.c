// 4. Write a program which accepts file name and one character from user and
// count number of occurrences of that characters from that file.
// Input : Demo.txt ‘M’
// Output : Frequency of M is 7


#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char *fileName, char ch)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0,iCnt = 0,iFreq = 0;

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
            if(Buffer[iCnt] == ch)
            {
                iFreq++;
            }
        }
    }

    close(fd);

    return iFreq;
}


int main()
{
    int iRet = 0;
    char Fname[50] = {'\0'};
    char Value = '\0';

    printf("Enter file name : \n");
    scanf("%[^'\n']s",Fname);

    fflush(stdin);

    printf("Enter a character to find frequency : \n");
    scanf("%c",&Value);

    iRet = CountChar(Fname,Value);

    printf("Frequency is : %d",iRet);
    return 0;
}
