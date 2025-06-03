// 2.Write a program which accept string from user and convert it into
// upper case.
// Input : “Marvellous Multi OS”

// Output : MARVELLOUS MULTI OS


#include<stdio.h>

void struprX(char chr[])
{
    int iCnt = 0,iUp = 0;
    char cUpper[50];
    char ch = '\0';
    while(chr[iCnt] != '\0' )
    {
        ch = chr[iCnt];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        cUpper[iUp] = ch;

        iCnt++;
        iUp++;
    }
    cUpper[iUp] = '\0';

    printf("Original string : %s \n",chr);
    printf("Upper case string : %s \n",cUpper);
}


int main()
{
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    struprX(str);
    return 0;
}
