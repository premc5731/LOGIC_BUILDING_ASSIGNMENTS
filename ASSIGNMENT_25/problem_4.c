// 4. Write a program which accept string from user and display only
// digits from that string.
// Input : “marve89llous121”

// Output : 89121

// Input : “Demo”

// Output :


#include<stdio.h>

void DisplayDigit(char chr[])
{
    int iCnt = 0,iDig = 0;
    char cDigits[50];
    char ch = '\0';
    while(chr[iCnt] != '\0' )
    {
        ch = chr[iCnt];
        if(ch >= '0' && ch <= '9')
        {
            cDigits[iDig] = ch;
            iDig++;
        }
        
        iCnt++;
    }
    cDigits[iDig] = '\0';

    printf("Original string : %s \n",chr);
    printf("toggle case string : %s \n",cDigits);
}


int main()
{
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    DisplayDigit(str);
    return 0;
}

