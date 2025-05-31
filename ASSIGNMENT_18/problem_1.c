// 1. Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements.
// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 53 (234 - 181)

#include <stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iEvenSum = 0, iOddSum = 0,iDiff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }        
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;
}

int main()
{
   int iSize = 0,iCnt = 0,Ret = 0;
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
   Ret = Difference(p,iSize);
   printf("Difference is : %d",Ret);

   free(p);

   return 0;

}