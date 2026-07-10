#include <stdio.h>
void main()
{
    int a,i,j,num=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {   
            printf("%d ",num);
            
    }
            num++;
            printf("\n");
        }
}