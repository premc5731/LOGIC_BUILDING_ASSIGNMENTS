// 3. Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 1;
    int iCount = 1;
    bool bret = false;

    while((iNo != 0) && (iCount <= 12))
    {
        if((iCount == 9) || (iCount == 12))
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
    bool bRet = false;

    cout<<"Enter a number : \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"9th or 12th bit is ON \n";
    }
    else
    {
        cout<<"9th and 12th bit is OFF \n";
    }
    return 0;
}