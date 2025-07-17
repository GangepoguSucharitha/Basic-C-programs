//print Sum of the digits of given integer is single digit
#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>10)
	{
		sum=0;
	while(n>0)
	{
		r=n%10;
		sum += r;
		n /=10;
	}
	printf("%d\n",sum);
	n=sum;
	}
	printf("Single digit sum = %d",n);
}
