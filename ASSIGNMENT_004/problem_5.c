/*
5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

// Time Complexity : O(N)

#include <stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0,iFactSum = 0, iNonFactSum = 0,iDiff = 0;
    if(iNo < 0)  // updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iDiff = (iFactSum - iNonFactSum); 
    
    return iDiff;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d", iRet);
    return 0;
}