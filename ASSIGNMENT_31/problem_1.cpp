// 1.Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0xffffffbf;

    iResult = iNo & iMask;  

    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Updated number is : "<<iRet;

    return 0;
}