#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * start=NULL;

struct node * create(){
    struct node * new=((struct node*)malloc(sizeof(struct node)));
    if (new==NULL){
        printf("No memory");
        exit(1);
    }
    scanf("%d",&new->data);
    new->next=NULL;
    return new;
}

void del_end(){
    struct node*temp=start;
    if(start==NULL){
        printf("EMPTY!");
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}

void del_start(){
    struct node* temp=start;
    if(start==NULL)
        printf("EMPTY");

    else{
        start=temp->next;
        free(temp);
    }
}

void createLL(){
    struct node * new=create();
    if(start==NULL){
        start=new;
    }
    else{
        struct node * temp=start;
        while(temp->next!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        temp->next=new;
    }
}

void display(){
    if(start==NULL){
        printf("EMPTY");
    }
    else{
        struct node*temp=start;
        printf("displaying...\n");
        while(temp->next!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d->",temp->data);
        if(temp->next==NULL){
            printf("NULL");
        }
    }
}


void main(){
    int ch;
    while (true){
        printf("\nEnter 1 to create a node");
        printf("\nEnter 2 to display existing node");
        printf("\nEnter 3 to delete a node from the end");
        printf("\nEnter 4 to delete a node from the start");
        printf("\nEnter  to exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        if(ch==1){
            createLL();
        }
        else if(ch==2){
            display();
        }
        else if(ch==3){
            del_end();
        }
        else if(ch==4){
            del_start();
        }


        else if(ch==4){
            printf("EXITING");
            break;
        }
        else{
            printf("Indvalid choice");

        }
    }
}