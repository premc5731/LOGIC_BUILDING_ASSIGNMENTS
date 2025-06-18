// 5. Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.
// UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
// {
// // Logic
// }



#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iResult = 0;
    UINT iMask = 0;
    int iCount = 1;

    while(iCount <= iEnd)
    {
        if((iCount >= iStart) && (iCount <= iEnd))
        {
            iMask = iMask | 1;
        }

        iCount++;
        iMask = iMask << 1;
    }

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iStartLoc = 0, iEndLoc = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    cout<<"Enter starting position \n";
    cin>>iStartLoc;

    cout<<"Enter ending position \n";
    cin>>iEndLoc;

    iRet = ToggleBitRange(iValue, iStartLoc, iEndLoc);

    cout<<"Updated number is : "<<iRet;

    return 0;
}