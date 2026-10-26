#include <stdio.h>
#include <stdbool.h>

int arr[100];
int size=0;
int i;

void create(){
    int i;
    printf("Enter the number of element : ");
    scanf("%d",&size);
    if(size<0 || size>100){
        printf("invalid");
        return;
    }
    for(i=0;i<size;i++){
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }
    printf("ARRAY CREATED");
}

void insertelement(){
    int index,item;
    if(size==100){
        printf("overflow");
        return;
    }

    printf("Enter the index to insert : ");
    scanf("%d",&index);
    if(index<0 || index>size){
        printf("index invalid");
        return;
    }
    printf("Enter the element: ");
    scanf("%d",&item);
    for(i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=item;
    size++;
}

void delelement(){
    int index;
    if(size==0){
        printf("underflow");
        return;
    }
    printf("enter the index");
    scanf("%d",&index);
    if(index<0 || index>100){
        printf("INVALID");
        return;
    }
    for(i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
}

void delitem(){
    int item,index=-1;
    if(size==0){
        printf("EMPTY");
        return;
    }
    printf("Enter the item to remove");
    scanf("%d",&item);
    for(i=0;i<size;i++){
        if(arr[i]==item){
            index=i;
            break;
            
        }
        else{
            printf("item not found");
        }
    }
    for(i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("DELETED");
}

void replace(){
    int item,index;
    if(size==0){
        printf("EMPTY");
    }
    printf("ENTER INDEX");
    scanf("%d",&index);
    if(index<0 || index >size){
        printf("INVALID");
        return;
    }
    printf("enter item : ");
    scanf("%d",&item);
    arr[index]=item;


}
void reverse(){
    if (size==0){
        printf("EMPTY");
    }
    int i=0;
    int j=size-1;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void display(){
    if (size==0){
        printf("empty");
        return;
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int main(){
    int ch;
    while(1){
        printf("\n===== ARRAY OPERATIONS =====\n"); 
        printf("1. Create Array\n"); 
        printf("2. Insert Element at Any Index\n"); 
        printf("3. Delete Element by Index\n"); 
        printf("4. Delete Element by Value\n"); 
        printf("5. Update Value at Specific Index\n"); 
        printf("6. Reverse Array\n"); 
        printf("7. Traverse Array\n"); 
        printf("8. Exit\n"); 
 
        printf("Enter your choice: "); 
        scanf("%d", &ch);
    

    if(ch==1){
        create();
    }
    else if(ch==2){
        insertelement();
    }
    else if(ch==3){
        delelement();
    }
    else if(ch==4){
        delitem();
    }
    else if (ch==6){
        reverse();
    }
    else if(ch==5){
        replace();
    }
    else if(ch==7){
        display();
    }
    else if(ch==8){
        printf("THANKYOU");
        break;
    }
    else{
        printf("INVALID");
    }
}
return 0;
}