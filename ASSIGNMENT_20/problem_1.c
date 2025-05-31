// 1. Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.

// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88

// Output : TRUE
// Input : N : 6
// NO: 12
// Elements :85 11 3 15 11 111


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
       
    }
    return bFlag;
}

int main()
{
   int iSize = 0,iCnt = 0,iValue = 0;
   bool bRet = false;
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

   printf("Enter the element to search : ");
   scanf("%d",&iValue);

   bRet = Check(p,iSize,iValue);
   if(bRet == true)
    {
        printf("%d is present ",iValue);
    }
    else
    {
        printf("%d is not present");
    }

    free(p);
    return 0;
}