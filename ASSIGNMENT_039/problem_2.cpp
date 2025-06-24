// 2. Write generic program to accept N values and count frequency of any specific
// value.
// Input : 10 20 30 10 30 40 10 40 10
// Value to check frequency : 10
// Output : 4

#include <iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iSize, T No)
{
    int iCnt = 0, iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);
    cout<<"frequency is : "<<iRet<<"\n";
    return 0;
}