// 5. Write generic program to accept N values and reverse the contents.
// Input : 10 20 30 10 30 40 10 40 10
// Output : 10 40 10 40 30 10 30 20 10

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    T temp;
    int iStart = 0, iEnd = (iSize-1);
    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    cout<<"Before reversing \n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i]<<" "; // 10 20 30 10 30 40 10 40 10
    }
    cout<<"\n";
    Reverse(arr, 9);

    cout<<"After reversing \n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i]<<" "; 
    }
}