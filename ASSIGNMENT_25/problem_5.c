// 5. Write a program which accept string from user and count number of
// white spaces

// Input : “MarvellouS”
// Output : 0

// Input : “MarvellouS Infosystems”

// Output : 1

// Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”

// Output : 5


#include<stdio.h>

int CountWhite(char chr[])
{
    int iCnt = 0,iCount = 0;
    while(chr[iCnt] != '\0' )
    {
        if(chr[iCnt] == ' ')
        {
            iCount++;
        }
        
        iCnt++;
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    iRet = CountWhite(str);
    printf("Number of white space : %d",iRet);
    return 0;
}

