/*
3. Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/

// Time complexity : O(N*2)

#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)  // updater
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo ; iCnt++)
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