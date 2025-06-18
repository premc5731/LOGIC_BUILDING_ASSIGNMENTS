// 5. Write a program which accepts file name and one count from user and read
// that number of characters from starting position.
// Input : Demo.txt 12
// Output : Display first 12 characters from Demo.txt


#include<stdio.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int DisplayN(char *fileName, int iLength)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0,iCnt = 0,iFreq = 0;

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("error Invalid filename ");
        return -1;
    }

    if(iLength <= BUFFER_SIZE)
    {
        iRet = read(fd,Buffer,iLength);
        printf("%s",Buffer);
    }
    else
    {
       for(iCnt = BUFFER_SIZE; iCnt > 0;)
       {
            iRet = read(fd,Buffer,iCnt);
            write(1,Buffer,iCnt);

            iLength = iLength - BUFFER_SIZE;
            if(iLength > BUFFER_SIZE)
            {
                iCnt = BUFFER_SIZE;
            }
            else
            {
                iCnt = iLength;
            }
       }

    }


    close(fd);

    return iFreq;
}


int main()
{
    int iLength = 0;
    char Fname[50] = {'\0'};

    printf("%d",(5-10));

    printf("Enter file name : \n");
    scanf("%[^'\n']s",Fname);

    fflush(stdin);

    printf("Enter the number of characters to display\n");
    scanf("%d",&iLength);

    DisplayN(Fname,iLength);

    return 0;
}
