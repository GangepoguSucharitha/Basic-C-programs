// print pattern using FOR loop
#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		{
		for(j=1;j<=i;j++)
		printf("* ");
	printf("\n");
}
}

