// 2.Write a program which accept string from user and accept one
// character. Return frequency of that character.

// Input : “Marvellous Multi OS”

// M

// Output : 2

// Input : “Marvellous Multi OS”

// W

// Output : 0


#include<stdio.h>
#include<stdbool.h>

int CountChar(char str[], char ch)
{
    int iCnt = 0,iCount = 0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);
    printf("The frequency of the char is : %d",iRet);

    return 0;
}