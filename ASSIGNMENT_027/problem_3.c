// 3. Write a program which accept string from user and copy capital
// characters of that string into another string.

// Input : “Marvellous Multi OS”

// Output : “MMOS”

#include<stdio.h>

void StrCpyCap(char src[], char dest[])
{
    if (src == NULL||dest == NULL)
    {
        printf("invalid input\n");
        return;
    }
    int iSCnt = 0,iDCnt = 0;


    while(src[iSCnt] != '\0')
    {
        if(src[iSCnt] >= 'A' && src[iSCnt] <= 'Z')
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

    StrCpyCap(arr, brr);
    printf("Capital from string : %s",brr);
    return 0;
}