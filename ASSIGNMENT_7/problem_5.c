/*
5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)
*/

// Time Complexity : O(N)

#include <stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    iDiff = iEvenFact - iOddFact;
    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is % d", iRet);
    return 0;
}