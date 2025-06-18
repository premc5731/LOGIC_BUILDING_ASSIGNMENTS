// 1.Write a program which checks whether 15th bit is On or OFF.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00004000;

    iResult = iNo & iMask;
    
    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
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
        printf("15th bit is ON ");
    }
    else
    {
        printf("15th bit is OFF ");
    }
    return 0;
}