// 5. Accept N numbers from user and return product of all odd elements.
// Input : N : 6

// Elements :15 66 3 70 10 88

// Output : 45
// Input : N : 6

// Elements :44 66 72 70 10 88

// Output : 0

#include <stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0,iProd = 1;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProd = iProd * Arr[iCnt];   
        }
       
    }
    if(iProd == 1)
    {
        return 0;
    }
    return iProd;
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

   iRet = Product(p,iSize);
   printf("Product of all odd numbers is  %d",iRet);

   free(p);
   return 0;
   
}


