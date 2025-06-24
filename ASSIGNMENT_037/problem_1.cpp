// Complete below code snippet by writing definitions of below function
// 1.SearchLast() - Search last occurrence of number
// 2.EvenCount() - Count even elements
// 3.OddCount(). - Count odd elements
// 4.SumAll(). - sum of all elements

#include <iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int iSize;

public:
    Array(int iLength)
    {
        this->iSize = iLength;
        this->Arr = new int[iSize];
    }

    Array(Array &ref)
    {
        this->iSize = ref.iSize;
        this->Arr = new int[this->iSize];

        int iCnt = 0;
        for (iCnt = 0; iCnt < this->iSize; iCnt++)
        {
            Arr[iCnt] = ref.Arr[iCnt];
        }
    }

    ~Array()
    {
        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Enter the elements \n";
    int iCnt = 0;
    for (iCnt = 0; iCnt < this->iSize; iCnt++)
    {
        cin >> this->Arr[iCnt];
    }
}

void Array::Display()
{
    cout << "Elements of array are : \n";
    int iCnt = 0;
    for (iCnt = 0; iCnt < this->iSize; iCnt++)
    {
        cout << this->Arr[iCnt]<<"\n";
    }
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no)
    {
    }
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::Frequency(int iNo)
{
    int iFreq = 0, iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int ArrSearch::SearchFirst(int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if (iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt + 1;
    }
}

int ArrSearch::SearchLast(int iNo)
{

    int iCnt = 0, iLast = -1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iLast = iCnt + 1;
        }
    }

    return iLast;
}

int ArrSearch::EvenCount()
{
    int iCnt = 0, iEvenCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }

    return iEvenCnt;
}

int ArrSearch::OddCount()
{
    int iCnt = 0, iOddCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iOddCnt++;
        }
    }

    return iOddCnt;
}

int ArrSearch::SumAll()
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    cout << "Inside main\n";
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);
    cout << "Frequency of "<< 11<< " is " << iret << "\n";

    iret = sobj1.SearchFirst(11);
    cout << "First occurance is " << iret << "\n";

    iret = sobj1.SearchLast(11);
    cout << "last occurance is " << iret << "\n";

    iret = sobj1.SumAll();
    cout << "Sum of All elements is " << iret << "\n";

    iret = sobj1.EvenCount();
    cout << "Number of even elements are : " << iret << "\n";

    iret = sobj1.OddCount();
    cout << "Number of odd elements are : " << iret << "\n";
    
    return 0;
}