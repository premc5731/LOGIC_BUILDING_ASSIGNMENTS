// 3.Write a program which accept string from user and toggle the case.
// Input : “Marvellous Multi OS”

// Output : mARVELLOUS mULTI os


#include<stdio.h>

void strtoggleX(char chr[])
{
    int iCnt = 0,iTog = 0;
    char cToggel[50];
    char ch = '\0';
    while(chr[iCnt] != '\0' )
    {
        ch = chr[iCnt];
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        cToggel[iTog] = ch;

        iCnt++;
        iTog++;
    }
    cToggel[iTog] = '\0';

    printf("Original string : %s \n",chr);
    printf("toggle case string : %s \n",cToggel);
}


int main()
{
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    strtoggleX(str);
    return 0;
}
