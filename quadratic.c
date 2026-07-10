#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	float d,root1,root2;
	printf("Enter coefficient a,b,c :");
	scanf("%f %f %f",&a,&b,&c);
	if (a==0)
	{	
		printf("This is not a quadratic equation\n");
	}
	else 
	{
		d=(b*b)-(4*a*c);
		if (d>0)
		{	
			root1=(-b+sqrt(d))/(2*a);
			root2=(-b-sqrt(d))/(2*a);
			printf("Roots are real and different");
			printf("root1=%.2f\nroot2=%.2f",root1,root2);
		}
		else if (d==0)
		{
			root1=-b/(2*a);
			printf("Root area real and equal");
			printf("root=%.2f",root1);
		}
		else
		{
			float real=-b/(2*a);
			float img=sqrt(-d)/(2*a);
			printf("Roots are complex");
			printf("root1=%.2f + %.2fi",real,img);
			printf("root2=%.2f - %.2fi",real,img);
		}
	}
}
			
		
