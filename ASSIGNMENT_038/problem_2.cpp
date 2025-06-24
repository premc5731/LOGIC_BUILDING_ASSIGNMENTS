// 2. Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template <class T>
T Largest(T no1, T no2, T no3)
{
    T ans;
    if((no1 > no2) && (no1 > no3))
    {
        ans = no1;
    }
    else if(no2 > no3)
    {
        ans = no2;
    }
    else
    {
        ans = no3;
    }

    return ans;
}

int main()
{
    
    int iRet = (10,20,30);
    cout<<"Largest is : "<<iRet<<"\n";

    double dRet = (12.4,23.5,35.9);
    cout<<"Largest is : "<<dRet<<"\n";
    return 0;
}