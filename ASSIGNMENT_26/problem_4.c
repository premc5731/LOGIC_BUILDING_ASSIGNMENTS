// 4.Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.

// Input : “Marvellous Multi OS”

// M

// Output : 11

// Input : “Marvellous Multi OS”

// W

// Output : -1

// Input : “Marvellous Multi OS”

// e

// Output : 4

#include<stdio.h>
#include<stdbool.h>

int LastChar(char str[], char ch)
{
    int iCnt = 0,iIndex = -1;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iIndex = iCnt;
        }
        iCnt++;
    }

    return iIndex;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);
    printf("The index last occurence of the char is : %d",iRet);

    return 0;
}