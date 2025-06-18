// 4. Accept Character from user and check whether it is special symbol
// or not (!, @, #, $, %, ^, &, *).
// Input : %
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>


bool ChkSpecial(char ch)
{
    int cValue = (int)ch;
    bool bFlag = false;

    if(((cValue >= 33) && (cValue <= 47)) || ((cValue >= 58) && (cValue <= 64)) || ((cValue >= 91) && (cValue <= 96)) || ((cValue >= 123) && (cValue <= 127)) )
    {
        bFlag = true;
    }

    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the character : ");
    scanf("%c", &cValue);
    bRet = ChkSpecial(cValue);
    if (bRet == true)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }
    return 0;
}