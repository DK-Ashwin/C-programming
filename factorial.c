#include <stdio.h>
void main()
{
	int fact,i,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial is : %d",fact);
}
