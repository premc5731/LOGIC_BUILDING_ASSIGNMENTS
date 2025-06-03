// 1.Write a program which accept string from user and convert it into
// lower case.

// Input : “Marvellous Multi OS”

// Output : marvellous multi os


#include<stdio.h>

void strlwrX(char chr[])
{
    int iCnt = 0,iSmall = 0;
    char cSmallarr[50];
    char ch = '\0';
    while(chr[iCnt] != '\0' )
    {
        ch = chr[iCnt];
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        cSmallarr[iSmall] = ch;

        iCnt++;
        iSmall++;
    }
    cSmallarr[iSmall] = '\0';

    printf("Original string : %s \n",chr);
    printf("lower case string : %s \n",cSmallarr);
}


int main()
{
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    strlwrX(str);
    return 0;
}
