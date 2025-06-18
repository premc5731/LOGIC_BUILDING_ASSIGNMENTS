// 1.Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE
// BOOL ChkBit(UINT iNo, int iPos)
// {
// // Logic
// }


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32) 
    {
        cout << "Invalid bit position. It must be between 1 and 32.\n";
        return -1;
    }
    UINT iResult = 0;
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;
    // cout<<"iresult"<<iResult;
    
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
    int iLocation = 0;
    bool bRet = false;

    cout<<"Enter a number : \n";
    cin>>iValue;

    cout<<"Enter the position \n";
    cin>>iLocation;

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"bit is ON at location "<<iLocation<< "\n";
    }
    else
    {
        cout<<"bit is OFF at location "<<iLocation<< "\n";
    }
    return 0;
}