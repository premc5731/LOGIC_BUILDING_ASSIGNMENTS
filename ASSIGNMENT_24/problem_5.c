// 3. Write a program which accept string from user and display it inn
// reverse order.

// Input : “MarvellouS”

// Output : “SuollevraM”


#include<stdio.h>

void Reverse(char chr[])
{
    int iCnt = 0,iRevcnt = 0;
    char cRevarr[50];
    while(chr[iCnt] != '\0')
    {
        iCnt++;
    }
    iCnt = iCnt - 1;
    while(iCnt >= 0 )
    {
        cRevarr[iRevcnt] = chr[iCnt];
        iRevcnt++;
        iCnt--;
    }
    cRevarr[iRevcnt] = '\0';

    printf("Original string : %s \n",chr);
    printf("Reversed string : %s \n",cRevarr);
}


int main()
{
    char str[50];
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    Reverse(str);
    return 0;

}