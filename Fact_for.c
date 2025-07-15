//Factorial of number'n'
#include<stdio.h>
main()
{
	int i,n,f=1;
	printf("enter n");
	scanf("%d",&n);
	if(n==0)
		{
		printf("%d\n",f);
		}
    else
		{
		for(i=1;i<=n;i++)
		f*=i;
		printf("%d\n",f);
	}
}
