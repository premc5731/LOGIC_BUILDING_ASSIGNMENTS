/*
3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

//Time complexity : O(1)

#include <stdio.h>
#define Meter 1000
int KMtoMeter(int iNo)
{
    int iK2M = 0;
    iK2M = iNo * Meter;
    return iK2M;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter distance : ");
    scanf("%d", &iValue);
    iRet = KMtoMeter(iValue);
    printf("%d",iRet);
    return 0;
}