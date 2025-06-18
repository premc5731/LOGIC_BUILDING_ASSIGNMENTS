// 2. Write a program which accept string from user and count number of
// small characters.

// Input : “Marvellous”

// Output : 9


#include<stdio.h>

int CountSmall(char chr[])
{
    int iCnt = 0;
    int iCount = 0;
    while(chr[iCnt] != '\0')
    {
        if((chr[iCnt] >= 'a') && (chr[iCnt] <= 'z'))
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

    Ret = CountSmall(str);
    printf("Number of small letters in %s : %d",str,Ret);

}