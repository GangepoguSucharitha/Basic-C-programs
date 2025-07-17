//print sum of N natural no's using WHILE
#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("sum of natural no's : %d\n",sum);
}
