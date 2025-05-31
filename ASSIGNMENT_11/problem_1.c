// 1. Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int AlphaNum = 65;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo ;iCnt++,AlphaNum++)
    {
        printf("%c \t",AlphaNum);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}


