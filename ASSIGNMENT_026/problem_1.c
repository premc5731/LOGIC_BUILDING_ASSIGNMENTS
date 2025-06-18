// 1.Write a program which accept string from user and accept one
// character. Check whether that character is present in string or not.

// Input : “Marvellous Multi OS”

// e

// Output : TRUE

// Input : “Marvellous Multi OS”

// W

// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char str[], char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
    }

    return bFlag;
}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}