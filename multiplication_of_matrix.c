#include<stdio.h>
int main(){
    int m,n,A[20][20],B[20][20],C[20][20],i,j,k,o,p;
    printf("Enter number of rows in first matrix: ");
    scanf("%d",&m);
    printf("Enter number of columns in first matrix: ");
    scanf("%d",&n);
    printf("Enter number of rows in second matrix: ");
    scanf("%d",&o);
    printf("Enter number of columns in second matrix: ");
    scanf("%d",&p);
    if(n==o){
    printf("\nEnter elements for first matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nEnter the element: ");
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements for second matrix\n");
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("\nEnter the element: ");
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            C[i][j]=0;
            for(k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\nThe product of given matrices\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("%d\t", C[i][j]);
        }       
    printf("\n");
    }
}
else
    printf("The order of matrices aren't compatible!");
}