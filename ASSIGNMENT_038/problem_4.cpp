// 4. Write generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    int iCnt = 0;
    T iMax = 0;
    iMax = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;

}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.2, 3.7, 9.8, 8.7};

    int iRet = Max(arr, 5);
    cout<<"Largest : "<<iRet<<"\n";

    float fRet = Max(brr, 4);
    cout<<"Largest : "<<fRet<<"\n";

    return 0;
}