// 4. Write a program which accept string from user and copy small
// characters of that string into another string.

// Input : “Marvellous multi OS”

// Output : “arvellous multi”

#include<stdio.h>

void StrCpySmall(char src[], char dest[])
{
    if (src == NULL||dest == NULL)
    {
        printf("invalid input\n");
        return;
    }
    int iSCnt = 0,iDCnt = 0;


    while(src[iSCnt] != '\0')
    {
        if(src[iSCnt] >= 'a' && src[iSCnt] <= 'z')
        {
            dest[iDCnt] = src[iSCnt];
            iDCnt++;
        }
        else if (src[iSCnt] == ' ')
        {
            dest[iDCnt] = src[iSCnt];
            iDCnt++;
        }
        
        iSCnt++;
    }
    dest[iDCnt] = '\0';

}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; 

    StrCpySmall(arr, brr);
    printf("Small  from string : %s",brr);
    return 0;
}