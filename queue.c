#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if(front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;
        front = front->next;

        if(front == NULL)
        {
            rear = NULL;
        }

        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element: %d\n", front->data);
    }
}

void traverse()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;

        printf("Queue: ");

        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\nQUEUE MENU\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                enqueue();
                break;
            }

            case 2:
            {
                dequeue();
                break;
            }

            case 3:
            {
                peek();
                break;
            }

            case 4:
            {
                traverse();
                break;
            }

            case 5:
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