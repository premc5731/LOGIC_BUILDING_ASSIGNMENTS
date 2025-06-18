// 2. Write a program which checks whether 5th & 18th bit is On or OFF.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00020010;
    cout<<"imask"<<iMask<<"\n";

    iResult = iNo & iMask;
    cout<<iResult<<"\n";
    
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter a number : \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("5 and 18th bit is ON ");
    }
    else
    {
        printf("5 and 18th is OFF ");
    }
    return 0;
}