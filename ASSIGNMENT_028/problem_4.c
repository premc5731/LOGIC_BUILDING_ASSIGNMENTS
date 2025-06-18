// 4. Write application which accept file name from user and display size of file.
// Input : Demo.txt
// Output : File size is 56 bytes


#include<stdio.h>
#include<stdbool.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int FileSize(char *FileName)
{
    int fd = 0,iBytes = 0,iTotalBytes = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FileName,O_RDONLY);

    while((iBytes = read(fd,Buffer,BUFFER_SIZE)) != 0)
    {
        iTotalBytes = iTotalBytes + iBytes; 
    }

    close(fd);
    return iTotalBytes;
}


int main()
{
    char Fname[50] = {'\0'};
    int iRet = false;

    printf("Enter file name : ");
    scanf("%[^'\n']s",Fname);

    iRet = FileSize(Fname);

    printf("file size : %d",iRet);

    return 0;
}