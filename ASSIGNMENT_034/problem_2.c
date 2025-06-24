// 2. Write a program which search last occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.


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

int Count(PNODE first)
{
    int iCount = 1;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

int SearchLastOcc( PNODE first , int no )
{
    int iCnt = 1, iRet = -1;

    while(first != NULL)
    {
        if(first->data == no)
        {
            iRet = iCnt;
        }
        first = first->next;
        iCnt++;
    }

    return iRet;

}
int main()
{
    int iRet = 0;

    PNODE head = NULL;
    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    iRet = SearchLastOcc(head,30);

    printf("last ocurrence is : %d\n",iRet);

    return 0;
}