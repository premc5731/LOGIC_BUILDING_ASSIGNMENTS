// 4. Write a program which accept one number from user and toggle 7th and
// 10th bit of that number. Return modified number.
// Input : 137
// Output : 713


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x00000240;
    
    iResult = iNo ^ iMask;  

    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    cout<<"Updated number is : "<<iRet;

    return 0;
}