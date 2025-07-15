//natural numbers upto N using DO WHILE
#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter n");
	scanf("%d",&n);
	do
	{
	printf("%d\n",i);
	i++;
	} while(i<=n);
}
