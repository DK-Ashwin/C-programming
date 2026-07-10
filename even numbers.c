#include <stdio.h>
void main()
{
     int n,i,A[20];
        printf("Enter the number of elements in the array: ");
        scanf("%d",&n);
        printf("Enter the elements of the array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(j=0;j<=n;j++)
        {
            if (A[j]%2==0)
            {
                printf("%dThe number is even ",A[j]);
            }
            else
            {
                printf("%dThe number is odd ",A[j]);
            }
        }
    }