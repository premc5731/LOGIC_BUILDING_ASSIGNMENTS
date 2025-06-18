// Input : iRow = 4 iCol = 4
// Output : A B C D
// a b c d
// A B C D
// a b c d

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char chCap = 'A', chSmall = 'a';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,chCap = 'A',chSmall = 'a'; j<=iCol; j++,chCap++,chSmall++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",chCap);
            }
            else
            {
                printf("%c\t",chSmall);
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns \n");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}