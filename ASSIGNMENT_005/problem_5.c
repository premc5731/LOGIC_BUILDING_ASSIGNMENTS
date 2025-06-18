/*
5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

// Time complexity : O(1)

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5; iCnt++)
    {
        printf("%d ", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d", &iValue);
    MultipleDisplay(iValue);
    return 0;
}