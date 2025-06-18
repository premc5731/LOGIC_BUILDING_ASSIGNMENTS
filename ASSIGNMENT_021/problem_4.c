// 4. Accept N numbers from user and display all such numbers which contains
// 3 digits in it.
// Input : N : 6

// Elements :8225 665 3 76 953 858
// Output : 665 953 858


#include <stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0,iDigitFreq = 0,iNo = 0;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        iDigitFreq = 0;
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigitFreq++;
            iNo = iNo / 10;
        }

        if(iDigitFreq == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
   int iSize = 0,iCnt = 0;
   int * p = NULL;
   printf("Enter the number of elements\n");
   scanf("%d",&iSize);
   p = (int*) malloc(iSize * sizeof(int));
   
   if(p == NULL)
   {
    printf("unable to allocated memory\n");
    return-1 ;
   }
   
   printf("Enter elements : \n");

   for(iCnt = 0;iCnt < iSize; iCnt++)
   {
    printf("Enter element %d : ",iCnt + 1);
    scanf("%d",&p[iCnt]);
   }

   Digits(p,iSize);

   free(p);

   return 0;
}
