/*
5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE
*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cValue)
{
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character :");
    scanf("%c", &cValue);
    cValue = tolower(cValue);
    bRet = ChkVowel(cValue);
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}