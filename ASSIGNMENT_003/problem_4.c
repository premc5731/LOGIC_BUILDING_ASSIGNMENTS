/*
4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/

#include<stdio.h>
void DisplayConvert(char CValue)
{
    if ((65 <= (int)CValue) && ((int)CValue <= 90) )
    {
        printf("%c", tolower(CValue));
    }
    else if ((97 <= (int)(CValue)) && ((int)CValue <= 122))
    {
        printf("%c", toupper(CValue));
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character : ");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;
}