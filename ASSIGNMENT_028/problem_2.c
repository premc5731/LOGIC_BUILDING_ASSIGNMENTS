// 2. Write application which accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully.


#include<stdio.h>
#include<stdbool.h>
#include<fcntl.h>

bool CreateFile(char *FileName)
{
    int fd = 0;
    bool bAns = false;

    fd = creat(FileName,0777);

    if(fd > 2)
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

    bRet = CreateFile(Fname);

    if(bRet == true)
    {
        printf("File created successfully.");
    }
    else
    {
        printf("unable to create file");
    }
    return 0;
}