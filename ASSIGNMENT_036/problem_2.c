// 2. Write a program which display all palindrome elements of singly linked
// list.


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("[ %d ] -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}


void DisplayPalindrome( PNODE first)
{
    int iRev = 0, iNo= 0, iDigit = 0;

    while(first != NULL)
    {
        iNo = first->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo/10;
        }
        if(iRev == first->data)
        {
            printf("[ %d ] -> ",iRev);
        }
        iRev = 0;
        first = first->next;
    }
    printf("NULL");
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;
    InsertFirst(&head, 77);
    InsertFirst(&head, 367);
    InsertFirst(&head, 646);
    InsertFirst(&head, 48);
    InsertFirst(&head, 31);
    InsertFirst(&head, 212);
    InsertFirst(&head, 11);

    Display(head);


    printf("Palindrome elements are : \n");
    DisplayPalindrome(head);

    return 0;
}