#include <stdio.h>
void main()
{
	int a;
	printf("Check if number is even or odd");
	printf("\nEnter the number: ");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("\nEVEN");
	}
	else
	{
		printf("\nODD");
	}
}
