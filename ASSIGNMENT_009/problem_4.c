/*
4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/
#include <stdio.h>
int CountFour(int iNo)
{
    int iFreq = 0;
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iFreq++;
        }
        iNo = iNo / 10;
    }
    return iFreq;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);;
    iRet = CountFour(iValue);
    printf("%d", iRet);
    return 0;
}