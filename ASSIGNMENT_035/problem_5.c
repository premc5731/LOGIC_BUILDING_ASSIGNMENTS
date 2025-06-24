// 5. Write a program which display addition of digits of element from singly
// linear linked list.


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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


void SumDigit(PNODE first)
{
    int iDigit = 0;
    int iNo = 0,iSum = 0;

    while(first != NULL)
    {
        iNo = first->data;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf(" %d ",iSum);
        iSum = 0;
        first = first->next;
    }

}
int main()
{
    int iRet = 0;

    PNODE head = NULL;
    InsertFirst(&head, 72);
    InsertFirst(&head, 30);
    InsertFirst(&head, 64);
    InsertFirst(&head, 40);
    InsertFirst(&head, 31);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    SumDigit(head);

    return 0;
}