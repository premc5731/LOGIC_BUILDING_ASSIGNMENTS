// 4. Write generic program to accept N values from user and return smallest values.

#include<iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    int iCnt = 0;
    T iMin = 0;
    iMin = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
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
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.2, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    cout<<"smallest : "<<iRet<<"\n";

    float fRet = Min(brr, 4);
    cout<<"smallest : "<<fRet<<"\n";

    return 0;
}