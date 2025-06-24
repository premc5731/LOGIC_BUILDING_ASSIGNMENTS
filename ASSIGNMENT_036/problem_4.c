// 4. Write a program which display smallest digits of all element from singly
// linear linked list.


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


void DisplaySmall( PNODE first)
{
    int iSmall = 0, iNo= 0, iDigit = 0;
    printf("smallest digit of an element are : \n");

    while(first != NULL)
    {
        iNo = first->data;
        iSmall = iNo % 10;
        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        printf(" %d ",iSmall);
        first = first->next;
    }
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;
    InsertFirst(&head, 77);
    InsertFirst(&head, 367);
    InsertFirst(&head, 646);
    InsertFirst(&head, -489);
    InsertFirst(&head, 31);
    InsertFirst(&head, 212);
    InsertFirst(&head, 11);

    Display(head);

    DisplaySmall(head);

    return 0;
}