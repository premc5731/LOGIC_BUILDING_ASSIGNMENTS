// 2. Write a program which displays all elements which are prime from singly
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

bool IsPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    for(iCnt = 2; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

void DisplayPrime(PNODE first)
{
    while(first != NULL)
    {
        if(IsPrime(first->data) == true)
        {
            printf("%d ",first->data);
        }
        first = first->next;
    }
}
int main()
{

    PNODE head = NULL;
    InsertFirst(&head, 11);
    InsertFirst(&head, 30);
    InsertFirst(&head, 28);
    InsertFirst(&head, 7);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    DisplayPrime(head);

    return 0;
}