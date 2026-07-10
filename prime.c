#include<stdio.h>
#include<math.h>
void main()
{
  int n,flag=0,i=2;
  printf("enter the number");
  scanf("%d",&n);
  while (i<n){
    if(n%i==0)
    {
      flag=1;
    }
      i++;
    }
    if (flag==0)
    {
      printf("it is prime");
    }
    else
    {
      printf("not prime");
    }
}

