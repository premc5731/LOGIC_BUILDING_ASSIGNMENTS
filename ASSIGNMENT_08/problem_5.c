/*
5. Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321
*/

//Time complexity : O(1)

#include <stdio.h>
double SquareMeter(int iValue)
{
    double dsqmeter = 0.0f;
    dsqmeter = iValue * 0.0929;
    return dsqmeter;
    
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet : ");
    scanf("%d", &iValue);
    dRet = SquareMeter(iValue);
    printf("%f",dRet);
    return 0;
}