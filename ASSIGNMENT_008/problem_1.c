/*
1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224
*/
//Time complexity : O(1)

#include <stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = PI * fRadius * fRadius;
    return fArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter a number : ");
    scanf("%f", &fValue);
    dRet = CircleArea(fValue);
    printf("Area is %f",dRet);
    return 0;
}