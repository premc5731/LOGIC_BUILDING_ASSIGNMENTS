// 2. Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)

// Input : “Marvellous Multi OS”

// 10

// Output : “Marvellous

// Note : If third parameter is greater than the size of source string then
// copy whole string into destination.

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if (src == NULL||dest == NULL)
    {
        printf("invalid input\n");
        return;
    }
    if(iCnt < 0)
    {
        printf("Invalid input \n");
        return;
    }
    int iCount = iCnt - 1;

    while ((*src != '\0') && (iCount >= 0))
    {
       *dest = *src;
       src++;
       dest++;
       iCount--;
    }

    *dest = '\0';
    
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; 
    StrNCpyX(arr, brr, 10);
    printf("%s", brr); 
    return 0;
}