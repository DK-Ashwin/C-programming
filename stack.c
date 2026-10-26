#include <stdio.h>;
#includ <stdbool.h>
int stack[100];
int top=-1;

void push{
    int item;
    if(top==99){
        printf("OVERFLOW");
        return;
    }
    printf("Enter the element to push");
    scanf("%s",&item);
    top=top+1;
    stack[top]=item;
    printf("ITEM ADDED");
}

void pop(){
    int item;
    if(top==-1){
        printf("stack empty");
        return;
    }
    printf("ENTER THE ITEM");
    scanf("%d",&item);

    item=stack[top];
    top=top-1;
    printf("poped item is %d",item);
}
void peek(){
    if(top==-1){
        printf("STACK EMPTY");
    }
    printf("top of the stack is %d",stack[top]);
}

void display(){
    if(top==-1){
        printf("stack empty");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}



int main(){
    int ch;
    while(true){
        printf("\n===== STACK ADT =====\n"); 
        printf("1. Push Element\n"); 
        printf("2. Pop Element\n"); 
        printf("3. Peek Top Element\n"); 
        printf("4. Display Stack\n"); 
        printf("5. Exit\n"); 
        printf("ENTER CHOICE : ");
        scanf("%d",&ch);

        if (ch==1){
            push();
        }
        else if(ch==2){
            pop();
        }
        else if(ch==3){
            peek();
        }
        elseif(ch==4){
            display();
        }
        else if(ch==5){
            break;
        }
        else{
            printf("INVALID");
        }
    }
    return 0;

}