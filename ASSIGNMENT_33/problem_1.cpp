// 1.Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input : 11
// Output : 3
// int CountOne(UINT iNo)
// {
// // Logic
// }


#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;
    UINT iMask = 1;
    int iResult = 0;

    while(iNo != 0)
    {
        iResult = iNo & iMask;
        if(iResult == 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }

    return iCount;
}


int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of ON bits are : "<<iRet;
    return 0;
}