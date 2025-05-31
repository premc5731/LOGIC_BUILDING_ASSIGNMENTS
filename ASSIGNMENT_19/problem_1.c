// 1. Accept N numbers from user and return frequency of even numbers.
// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 3


#include <stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0,iFreq = 0;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFreq++;;
        }
    }
    return iFreq;
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
   Ret = CountEven(p,iSize);
   printf("Result is : %d",Ret);

   free(p);

   return 0;

}