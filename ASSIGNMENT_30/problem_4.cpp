// 4. Write a program which checks whether 7th & 8th & 9th bit is On or
// OFF.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x000001C0;
    cout<<"iMask : "<<iMask<<"\n";

    iResult = iNo & iMask;
    cout<<"iResult :"<<iResult<<"\n";
    
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
        printf("7th & 8th & 9th bit is ON ");
    }
    else
    {
        printf("7th & 8th & 9th bit is  OFF ");
    }
    return 0;
}