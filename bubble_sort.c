#include<stdio.h>
int main(){
    int n,A[20],i,j,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Input numbers for array: ");
        scanf("%d",&A[i]);
    }
    printf("\nsBefore Sorting\n");
    for(i=0;i<n;i++){
            printf("%d\t",A[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    for(i=0;i<n;i++){
            printf("%d\t",A[i]);
    }
}