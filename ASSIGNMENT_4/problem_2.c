/*
2.Write a program which accept number from user and display its factors in
decreasing order.
Input : 12
Output : 6 4 3 2 1
Input : 13
Output : 1
Input : 10
Output : 5 2 1
*/

// Time Complexity : O(N/2)

#include <stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)  // updater
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt == 0))
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);
    FactRev(iValue);
    return 0;
}