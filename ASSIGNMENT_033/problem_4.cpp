// 4. Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input : 10 3 7
// Output : FALSE



#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int ipos1, int iPos2)
{
    UINT iResult = 0;
    UINT iMask = 1;
    int iCount = 1;
    bool bret = false;

    while(iNo != 0)
    {
        if((iCount == ipos1) || (iCount == iPos2))
        {
            iResult = iNo & iMask;
            if(iResult == 1)
            {
                bret = true;
                break;
            }
        }
        iCount++;
        iNo = iNo >> 1;
    }
    
    return bret;
}

int main()
{
    UINT iValue = 0;
    int iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter a number : \n";
    cin>>iValue;

    cout<<"Enter first position \n";
    cin>>iLocation1;

    cout<<"Enter second position \n";
    cin>>iLocation2;

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == true)
    {
        cout<<iLocation1<<" or "<<iLocation2<<" bit is ON \n";
    }
    else
    {
        cout<<iLocation1<<" and "<<iLocation2<<" bit is OFF \n";
    }
    return 0;
}