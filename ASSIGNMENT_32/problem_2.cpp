// 2. Write a program which accept one number and position from user and off
// that bit. Return modified number.
// Input : 10 2
// Output : 8
// UINT OffBit(UINT iNo, int iPos)
// {
// // Logic
// }


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32) 
    {
        cout << "Invalid bit position. It must be between 1 and 32.\n";
        return -1;
    }
    UINT iResult = 0;
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iLocation = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    cout<<"Enter the position \n";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Updated number : "<<iRet;
    return 0;
}