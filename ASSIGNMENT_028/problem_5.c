// 5. Write application which accept file name from user and one string from user. Write
// that string at the end of file.
// Input : Demo.txt
// Hello World

// Output : Write Hello World at the end of Demo.txt file



#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void WriteFile(char *FileName, char *str)
{
    int fd = 0,ret = 0;
    char Buffer[BUFFER_SIZE];

    fd = open(FileName,O_WRONLY | O_APPEND);

    ret = write(fd,str,strlen(str));
    printf("ret %d",ret);

    close(fd);
}


int main()
{
    char Fname[50] = {'\0'};
    char Buffer[100] = {'\0'};

    printf("Enter file name : ");
    scanf("%[^'\n']s",Fname);

    fflush(stdin);

    printf("Enter content to add into file : ");
    scanf("%[^'\n']s",Buffer);


    WriteFile(Fname,Buffer);

    printf("writing sucessfully done");

    return 0;
}