// 4. Accept N numbers from user and return frequency of 11 form it.
// Input : N : 6

// Elements :85 66 3 15 93 88

// Output : 0
// Input : N : 6

// Elements :85 11 3 15 11 111

// Output : 2


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0,iFreq = 0;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
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
   Ret = Frequency(p,iSize);
   printf("frequency of 11 is : %d",Ret);

   free(p);

   return 0;

}