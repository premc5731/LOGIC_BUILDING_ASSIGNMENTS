// 1. Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output: *
//         * *
//         * * *
//         * * * *


#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; i >= j ; j++)
        {
                printf("*\t");   
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}