//write a program to search an element in an array of size n (Liner Search or Sequential Search)
#include<stdio.h>
int main(){
    int i,n,key,A[20],pos=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&A[i]);
    }
    printf("Enter an element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(A[i]==key){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        printf("The number is not found.");
    }
    else
    {
        printf("Element found at index %d",pos);
    }

}