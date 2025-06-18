/*
1.Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)
*/

// Time Complexity : O(N/2)

#include <stdio.h>
int MultFact(int iNo)
{
    int iMul = 1;
    int iCnt = 0;
    if (iNo < 0) // updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);
    iRet = MultFact(iValue);
    printf("%d", iRet);
    return 0;
}
