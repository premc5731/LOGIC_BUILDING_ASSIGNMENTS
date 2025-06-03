// 1.Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strcpy()
// function)

// Input : “Marvellous Multi OS”

// Output : “Marvellous Multi OS” in another string



#include<stdio.h>
#include<stdbool.h>

void StrCpyX(char src[],char dest[])
{
    if (src == NULL||dest == NULL)
    {
        printf("invalid input\n");
        return;
    }
    if (dest == NULL)
    {
        printf("invalid input\n");
        return;
    }

    int iSrc = 0,iDest = 0;

    while(src[iSrc] != '\0')
    {
        dest[iDest] = src[iSrc];

        iSrc++;
        iDest++;
    }
    dest[iDest] = '\0';

}


int main()
{
    char arr[20];
    char Copystr[50];


    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,Copystr);

    printf("Original string : %s\n",arr);
    printf("Copied string : %s",Copystr);

    return 0;
}