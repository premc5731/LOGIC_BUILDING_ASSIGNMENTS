// 1.Write a program which accept string from user and count number of
// capital characters.

// Input : “Marvellous Multi OS”

// Output : 4

#include<stdio.h>

int CountCapital(char chr[])
{
    int iCnt = 0;
    int iCount = 0;
    while(chr[iCnt] != '\0')
    {
        if((chr[iCnt] >= 'A') && (chr[iCnt] <= 'Z'))
        {
            iCount++;
        }

        iCnt++;
    }
    return iCount;
}


int main()
{
    char str[50];
    int Ret = 0;
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    Ret = CountCapital(str);
    printf("Number of capital letters in %s : %d",str,Ret);

}