#include <stdio.h>
void main()
{
	int a;
	printf("Enter the year : ");
	scanf("%d",&a);
	if (a%4==0)
	{
		if (a%100!=0)
		{
			printf("Leap year");
		}
		else if (a%400==0)
		{
			printf("Leap year");
		}
	}
	else
	{
		printf("Not a leap year");
	}
}
