//print Sum of the digits of given integer using WHILE
#include<stdio.h>
main()
{
	int i,n,r,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum += r;
		n /=10;
	}
	printf("sum = %d",sum);
}
