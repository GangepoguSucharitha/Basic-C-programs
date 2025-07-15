//prime no's upto N using FOR
#include<stdio.h>
main()
{
	int i,j,n,count=0;
	printf("enter number");
	scanf("%d",&n);
	printf("prime numbers are\t");
	for(i=1;i<=n;i++)
	{	count=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		count++;
	    }
	if(count==2)
	printf("%d\t",i);
	}
}
