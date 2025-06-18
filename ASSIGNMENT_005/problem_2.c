/*
2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

// Time complexity : O(N)

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)  // updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}