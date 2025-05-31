// 5. Accept N numbers from user and accept one another number as NO ,
// return frequency of NO form it.

// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88

// Output : 2
// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iFreq = 0;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
       
    }
    return iFreq;
}

int main()
{
   int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
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

   printf("Enter the element to get frequency : ");
   scanf("%d",&iValue);

   iRet = Frequency(p,iSize,iValue);
   printf("Frequency of %d is : %d ",iValue,iRet);

   free(p);

   return 0;

}