#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    return newnode;
}

void insertbeg()
{
    struct node *newnode = create();
    struct node *temp;

    if(start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;

        while(temp->next != start)
        {
            temp = temp->next;
        }

        newnode->next = start;
        temp->next = newnode;
        start = newnode;
    }
}

void insertend()
{
    struct node *newnode = create();
    struct node *temp;

    if(start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        temp = start;

        while(temp->next != start)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = start;
    }
}

void insertafter()
{
    int key;
    struct node *newnode = create();
    struct node *temp;

    if(start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        printf("Enter data after which to insert: ");
        scanf("%d", &key);

        temp = start;

        while(temp->data != key && temp->next != start)
        {
            temp = temp->next;
        }

        if(temp->data != key)
        {
            printf("Data not found\n");
            free(newnode);
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void delbeg()
{
    struct node *temp;
    struct node *delnode;

    if(start == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if(start->next == start)
    {
        free(start);
        start = NULL;
    }
    else
    {
        temp = start;

        while(temp->next != start)
        {
            temp = temp->next;
        }

        delnode = start;
        start = start->next;
        temp->next = start;
        free(delnode);
    }
}

void delend()
{
    struct node *temp;
    struct node *delnode;

    if(start == NULL)
    {
        printf("Linked list is empty\n");
    }
    else if(start->next == start)
    {
        free(start);
        start = NULL;
    }
    else
    {
        temp = start;

        while(temp->next->next != start)
        {
            temp = temp->next;
        }

        delnode = temp->next;
        temp->next = start;
        free(delnode);
    }
}

void delafter()
{
    int key;
    struct node *temp;
    struct node *delnode;

    if(start == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Enter data after which to delete: ");
    scanf("%d", &key);

    temp = start;

    while(temp->data != key && temp->next != start)
    {
        temp = temp->next;
    }

    if(temp->data != key)
    {
        printf("Data not found\n");
    }
    else if(temp->next == start)
    {
        printf("No node exists after the given data\n");
    }
    else
    {
        delnode = temp->next;
        temp->next = delnode->next;
        free(delnode);
    }
}

void traverse()
{
    struct node *temp;

    if(start == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        temp = start;

        printf("Circular linked list: ");

        do
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        while(temp != start);

        printf("START\n");
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\nCIRCULAR LINKED LIST MENU\n");

        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert after a given data\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete after a given data\n");
        printf("7. Traverse\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                insertbeg();
                break;
            }

            case 2:
            {
                insertend();
                break;
            }

            case 3:
            {
                insertafter();
                break;
            }

            case 4:
            {
                delbeg();
                break;
            }

            case 5:
            {
                delend();
                break;
            }

            case 6:
            {
                delafter();
                break;
            }

            case 7:
            {
                traverse();
                break;
            }

            case 8:
            {
                printf("Exiting program...\n");
                return 0;
            }

            default:
            {
                printf("Invalid choice\n");
            }
        }
    }
}