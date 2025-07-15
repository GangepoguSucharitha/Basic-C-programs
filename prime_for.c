//Check its prime no. or not
#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("enter number");
	scanf("%d",&n);
if(n>1)
	{
		for(i=1;i<=n;i++)
		if(n%i==0)
		count++;
	{
	if(count==2)
	printf("it is prime");
	else
	printf("it is not prime");
	}
}
else
printf("it may zero or Negative");
}
