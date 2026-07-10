#include <stdio.h>
void main()
{
	int ch,range,i,num=1,j;
	char a;
	printf("Enter 1 to print pattern 1\n");
	printf("Enter 2 to print pattern 2\n");
	printf("Enter 3 to print pattern 3\n");
	printf("Enter 4 to print pattern 4\n");
	printf("Enter 5 to print pattern 5\n");
	printf("Enter 6 to print pattern 6\n");
	printf("Enter 7 to print pattern 7\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=0;i<=range;i++)
			{
				for(j=0;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}break;
		case 2:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=range;i>=0;i--)
			{
				for(j=i;j>=1;j--)
				{
					printf("*");
				}
				printf("\n");
			}break;
		case 3:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=1;i<=range;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d",j);
				}
				printf("\n");
			}break;
		case 4:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=1;i<=range;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d",num);
				}
				printf("\n");
			}break;
		case 5:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=1;i<=range;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d",i);
				}
				printf("\n");
			}break;
		case 6:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=0;i<=range;i++)
			{
				for(j=0;j<=i;j++)
				{
					printf("%c",'A'+j);
				}
				printf("\n");
			}break;
		case 7:
			printf("Enter the number of coloumn : ");
			scanf("%d",&range);
			for (i=0;i<=range;i++)
			{
				for(j=0;j<=i;j++)
				{
					printf("%c",'A'+i);
				}
				printf("\n");
			}break;
		default:printf("Invalid choice");
		}
}
