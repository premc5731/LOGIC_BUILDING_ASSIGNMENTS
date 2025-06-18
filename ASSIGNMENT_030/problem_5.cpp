// 5. Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x80000001;
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
        printf("1st and last bit is ON ");
    }
    else
    {
        printf("1st and last bit is  OFF ");
    }
    return 0;
}