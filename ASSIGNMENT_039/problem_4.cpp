// 3. Write generic program to accept N values and search last occurrence of any
// specific value.
// Input : 10 20 30 10 30 40 10 40 10
// Value to search : 40
// Output : 8

#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *Arr, int iSize, T No)
{
    int iCnt = 0,iPos = -1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iPos = iCnt+1;
        }
    }

    return iPos;
}
int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = SearchLast(arr, 9, 40);

    cout<<iRet<<"\n";
    return 0;
}