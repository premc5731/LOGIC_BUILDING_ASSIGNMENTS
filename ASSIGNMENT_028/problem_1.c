// 1. Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully.

#include<stdio.h>
#include<stdbool.h>
#include<fcntl.h>

bool OpenFile(char *FileName)
{
    int fd = 0;
    bool bAns = false;

    fd = open(FileName,O_RDONLY);

    if(fd > 0)
    {
        bAns = true;
    }
    else
    {
        bAns = false;
    }

    close(fd);
    return bAns;
}


int main()
{
    char Fname[50] = {'\0'};
    bool bRet = false;

    printf("Enter file name : ");
    scanf("%[^'\n']s",Fname);

    bRet = OpenFile(Fname);

    if(bRet == true)
    {
        printf("File opened successfully.");
    }
    else
    {
        printf("Invalid file name");
    }
    return 0;
}