// 2. Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 4 iCol = 4
// Output : 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iEven = 0, iOdd = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iEven = 2,iOdd = 1; j <= iCol+1; j++,iEven +=2, iOdd +=2)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",iEven);
            }
            else
            {
                printf("%d\t",iOdd);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);
    return 0;

}