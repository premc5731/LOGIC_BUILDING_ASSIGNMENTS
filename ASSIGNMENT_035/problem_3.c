// 3. Write a program which returns addition of all even element from singly
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

int AdditionEven(PNODE first)
{
    int iSum = 0;
    while(first != NULL)
    {
        if((first->data) % 2 == 0)
        {
            iSum = iSum + first->data;
        }
        first = first->next;
    }

    return iSum;
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;
    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 28);
    InsertFirst(&head, 40);
    InsertFirst(&head, 6);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    iRet = AdditionEven(head);

    printf("Addition of even elements is : %d",iRet);

    return 0;
}