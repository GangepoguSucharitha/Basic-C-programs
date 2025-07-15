//print N odd no's using DO WHILE
#include<stdio.h>
main()
{
	int i,n;
	printf("enter n");
	scanf("%d",&n);		
	i=1;
	do
		{
		printf("%d\n",i);
		i+=2;
		}
		while(i<=n);
}
