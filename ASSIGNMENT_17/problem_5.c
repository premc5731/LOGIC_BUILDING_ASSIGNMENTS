// Input : iRow = 4 iCol = 4
// Output: 1 2 3 4 5
//         1  2    5
//         1    3  5
//         1     4 5
//         1 2 3 4 5
#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
    int i = 0, j = 0,iCnt = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt = 1; j <= iCol ; j++,iCnt++)
        {
            if(i == 1 || i == iRow || j == 1|| j == iCol|| i == j)
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("\t");
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