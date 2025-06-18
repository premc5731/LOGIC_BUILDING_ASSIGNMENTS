// Input : iRow = 4 iCol = 4
// Output: 1 2 3 4
//         2 3 4
//         3 4
//         4


#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
    int i = 0, j = 0,iCnt;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol,iCnt = i; j >= 1 ; j--,iCnt++)
        {
            if(i <= j)
            {
                printf("%d\t",iCnt);
            }
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