// 3. Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.

// Input : “MarvellouS”

// Output : 6 (8-2)


#include<stdio.h>

int Difference(char chr[])
{
    int iCnt = 0,iDiff = 0;
    int iCapCount = 0,iSmalCount = 0;
    while(chr[iCnt] != '\0')
    {
        if((chr[iCnt] >= 'A') && (chr[iCnt] <= 'Z'))
        {
            iCapCount++;
        }
        if((chr[iCnt] >= 'a') && (chr[iCnt] <= 'z'))
        {
            iSmalCount++;
        }

        iCnt++;
    }
    iDiff = iSmalCount - iCapCount;
    return iDiff;
}


int main()
{
    char str[50];
    int Ret = 0;
    printf("Enter a string : \n");
    scanf("%[^'\n']s",&str);

    Ret = Difference(str);
    printf("Difference of capital and small letters is : %d",Ret);

}