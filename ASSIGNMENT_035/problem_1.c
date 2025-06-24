// 1. Write a program which displays all elements which are perfect from singly
// linear linked list.

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

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

bool IsPerfect(int iNo)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    return false;
}

void DisplayPerfect(PNODE first)
{
    while(first != NULL)
    {
        if(IsPerfect(first->data) == true)
        {
            printf("%d ",first->data);
        }
        first = first->next;
    }
}
int main()
{

    PNODE head = NULL;
    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 28);
    InsertFirst(&head, 40);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    DisplayPerfect(head);

    return 0;
}