// 2. Write a program which accept one number from user and off 7th and 10th
// bit of that number. Return modified number.
// Input : 577
// Output : 1


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0xfffffdbf;
    
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