// 3. Accept N numbers from user check whether that numbers contains 11 in
// it or not.
// Input : N : 6

// Elements :85 66 11 80 93 88

// Output : 11 is present


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFalg = false;
    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFalg = true;
            break;
        }
       
    }
    return bFalg;
}

int main()
{
   int iSize = 0,iCnt = 0;
   bool Ret = false;
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
   Ret = Check(p,iSize);
   if( Ret == true)
   {
    printf("11 is present");
   }
   else
   {
    printf("11 is not present");
   }

   free(p);

   return 0;
}