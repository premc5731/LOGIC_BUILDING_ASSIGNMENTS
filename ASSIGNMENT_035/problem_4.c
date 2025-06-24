// 4. Write a program which return second Secmaximum element from singly linear
// linked list.


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



int SecMaximum(PNODE first)
{
    int iMax = INT_MIN, iSecMax = INT_MIN;
    iMax = first->data;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iSecMax = iMax;
            iMax = first->data;
        }
        else if(first->data > iSecMax && first->data < iMax)
        {
            iSecMax = first->data;
        }
        first = first->next;
    }

    return iSecMax;
}
int main()
{
    int iRet = 0;

    PNODE head = NULL;
    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 60);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);

    Display(head);

    iRet = SecMaximum(head);

    printf("Second Largest element is : %d\n",iRet);

    return 0;
}