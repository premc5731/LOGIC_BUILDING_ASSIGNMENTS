// 3. Write application which accept file name from user and read all data from that file
// and display contents on screen.
// Input : Demo.txt
// Output : Display all data of file.


#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void Display(char *FileName)
{
    int fd = 0,ret = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FileName,O_RDONLY);

    while((ret = read(fd,Buffer,1024)) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',BUFFER_SIZE);
    }
    close(fd);
}


int main()
{
    char Fname[50] = {'\0'};

    printf("Enter file name : ");
    scanf("%[^'\n']s",Fname);

    Display(Fname);

    return 0;
}