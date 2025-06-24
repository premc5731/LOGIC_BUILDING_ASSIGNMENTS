// 1. Write a program which search first occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.


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

int SearchFirstOcc( PNODE first , int no )
{
    int iCnt = 1;
    bool bFlag = false;

    while(first != NULL)
    {
        if(first->data == no)
        {
            bFlag = true;
            break;
        }
        first = first->next;
        iCnt++;
    }

    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }

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
    InsertFirst(&head, 40);

    Display(head);

    iRet = SearchFirstOcc(head,30);

    printf("first ocurrence is : %d\n",iRet);

    return 0;
}