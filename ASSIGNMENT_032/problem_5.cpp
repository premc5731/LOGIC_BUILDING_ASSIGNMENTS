// 5. Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits)


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0xf000000f;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number : "<<iRet;
    return 0;
}