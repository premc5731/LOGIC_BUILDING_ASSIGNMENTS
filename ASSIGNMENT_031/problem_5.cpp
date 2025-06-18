// 5. Write a program which accept one number from user and on its first 4
// bits. Return modified number.
// Input : 73
// Output : 79


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x0000000f;
    
    iResult = iNo | iMask;  

    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Updated number is : "<<iRet;

    return 0;
}