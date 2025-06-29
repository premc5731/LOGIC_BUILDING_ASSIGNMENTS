// 2. Accept N numbers from user and return the smallest number.
// Input : N : 6

// Elements :85 66 3 66 93 88

// Output : 3


#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = INT_MAX;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
       
    }
    return iMin;
}

int main()
{
   int iSize = 0,iCnt = 0,iRet = 0;
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

   iRet = Maximum(p,iSize);
   
   printf("Smallest number is : %d",iRet);

   free(p);

   return 0;
}