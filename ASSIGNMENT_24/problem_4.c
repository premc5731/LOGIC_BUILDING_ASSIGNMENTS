// 4. Write a program which accept string from user and check whether
// it contains vowels in it or not.

// Input : “marvellous”

// Output : TRUE

// Input : “Demo”

// Output : TRUE

// Input : “xyz”

// Output : FALSE



#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char chr[])
{
    bool bFlag = false;
    int iCnt = 0;

    while(chr[iCnt] != '\0')
    {
        if(chr[iCnt] == 'A' || chr[iCnt] == 'a')
        {
            bFlag = true;
            break;
        }
        if(chr[iCnt] == 'E' || chr[iCnt] == 'e')
        {
            bFlag = true;
            break;
        }
        if(chr[iCnt] == 'I' || chr[iCnt] == 'i')
        {
            bFlag = true;
            break;
        }
        if(chr[iCnt] == 'O' || chr[iCnt] == 'o')
        {
            bFlag = true;
            break;
        }
        if(chr[iCnt] == 'U' || chr[iCnt] == 'u')
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
    char str[50];
    bool bRet = 0;
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    bRet = ChkVowels(str);
    if(bRet == true)
    {
        printf("Contains Vowels \n");
    }
    else
    {
        printf("There is no vowel \n");
    }

}