// 5. Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).

// Input : “Marvellous Infosystems”

// “Logic Building”

// Output : “Marvellous Infosystems Logic Building”
#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    if (src == NULL||dest == NULL)
    {
        printf("invalid input\n");
        return;
    }
    int iSCnt = 0, iCnt = 0;
    while (src[iSCnt] != '\0') // Traverse first string till end
    {
        iSCnt++;
    }
    src[iSCnt] = ' ';
    iSCnt++;
    while (dest[iCnt] != '\0') // Copy contents of destination in source
    {
        
        src[iSCnt] = dest[iCnt];
        iSCnt++;
        iCnt++;
    }
    src[iSCnt] = '\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);
    printf("%s", arr); // Marvellous Infosystems Logic Building

    return 0;
}