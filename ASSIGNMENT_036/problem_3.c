// 3. Write a program which display product of all digits of all element from
// singly linear linked list. (Don’t consider 0)


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


void DisplayProduct( PNODE first)
{
    int iPro = 1, iNo= 0, iDigit = 0;
    printf("product of digits are : \n");

    while(first != NULL)
    {
        iNo = first->data;
        iPro = 1;
        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                continue;
            }
            iPro = iPro * iDigit;
            iNo = iNo / 10;
        }
        printf(" %d ",iPro);
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
    InsertFirst(&head, 48);
    InsertFirst(&head, 31);
    InsertFirst(&head, 212);
    InsertFirst(&head, 11);

    Display(head);

    DisplayProduct(head);

    return 0;
}