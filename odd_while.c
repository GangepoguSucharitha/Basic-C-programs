//print N odd no's using WHILE
#include<stdio.h>
main()
{
	int i,n;
	printf("enter n");
	scanf("%d",&n);		
	i=1;
	while(i<=n)
//	if(i%2!=0)
		{
		printf("%d\n",i);
		i+=2;
		}

}
