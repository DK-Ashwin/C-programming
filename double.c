#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

struct node *create() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

void insertbeg() {
    struct node *newnode = create();
    if (start == NULL) {
        start = newnode;
    } else {
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
}

void insertend() {
    struct node *newnode = create();
    if (start == NULL) {
        start = newnode;
    } else {
        struct node *temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void insertafter() {
    if (start == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    int key;
    printf("Enter data after which to insert: ");
    scanf("%d", &key);

    struct node *temp = start;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Data not found\n");
    } else {
        struct node *newnode = create();
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
    }
}

void delbeg() {
    if (start == NULL) {
        printf("Linked list is empty\n");
    } else {
        struct node *temp = start;
        start = start->next;
        if (start != NULL) {
            start->prev = NULL;
        }
        free(temp);
        printf("Node deleted successfully.\n");
    }
}

void delend() {
    if (start == NULL) {
        printf("Linked list is empty\n");
    } else if (start->next == NULL) {
        free(start);
        start = NULL;
        printf("Node deleted successfully.\n");
    } else {
        struct node *temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        printf("Node deleted successfully.\n");
    }
}

void delafter() {
    if (start == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    int key;
    printf("Enter data after which to delete: ");
    scanf("%d", &key);

    struct node *temp = start;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Data not found\n");
    } else if (temp->next == NULL) {
        printf("No node exists after the given data\n");
    } else {
        struct node *delnode = temp->next;
        temp->next = delnode->next;
        if (delnode->next != NULL) {
            delnode->next->prev = temp;
        }
        free(delnode);
        printf("Node deleted successfully.\n");
    }
}

void traverse() {
    if (start == NULL) {
        printf("Linked list is empty\n");
    } else {
        struct node *temp = start;
        printf("Forward Traversal:  NULL <-> ");
        while (temp->next != NULL) {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }
        printf("%d <-> NULL\n", temp->data);

        printf("Backward Traversal: NULL <-> ");
        while (temp != NULL) {
            printf("%d <-> ", temp->data);
            temp = temp->prev;
        }
        printf("NULL\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("\nDOUBLY LINKED LIST MENU\n");
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

        switch (ch) {
            case 1: insertbeg(); break;
            case 2: insertend(); break;
            case 3: insertafter(); break;
            case 4: delbeg(); break;
            case 5: delend(); break;
            case 6: delafter(); break;
            case 7: traverse(); break;
            case 8: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}