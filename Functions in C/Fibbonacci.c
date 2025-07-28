//Fibonacci series using Fn: WITH RETURN WITH ARG
#include<stdio.h>
int fibbo(int,int);
main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d %d",&a,&b);
	fibbo(a,b);
}
int fibbo(a,b)
{
	int i=0,n,c;
	printf("enter upto series u want");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
}
