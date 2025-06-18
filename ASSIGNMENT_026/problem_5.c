// 5. Write a program which accept string from user StrRevX that string
// in place.

// Input : “abcd”

// Output : “dcba”

// Input : “abba”

// Output : “abba”



#include<stdio.h>
#include<stdbool.h>


void SwapX(char *c1, char *c2)
{
    char cTemp = *c1;
    *c1 = *c2;
    *c2 = cTemp; 
}

void StrRevX(char str[])
{
    int iStart = 0,iEnd = 0;
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd = iEnd - 1;

    while(iStart < iEnd)
    {
        SwapX(&(str[iStart]), &(str[iEnd]));

        iStart++;
        iEnd--;
    }

    printf("Reversed string : %s",str);

}


int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Original string : %s\n",arr);
    StrRevX(arr);
    return 0;
}