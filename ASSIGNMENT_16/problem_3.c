// Input : iRow = 5 iCol = 5
// Output: $ * * * *
//         # $ * * *
//         # # $ * *
//         # # # $ *
//         # # # # $


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
        for(j = 1; j <= iCol ; j++)
        {
            if(i > j)
            {
                printf("#\t");
            }
            else if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
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