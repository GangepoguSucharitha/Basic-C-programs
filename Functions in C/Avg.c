//avg of n integers WITH RETURN,WITH ARG
#include<stdio.h>
float average(int);
main()
{
	int n;
	printf("enter number of integers");
	scanf("%d",&n);
	printf("%f",average(n));
}
float average(int n)
{	
	int i=0,sum=0,a;
	float average;
	while(i<n)
	{
		printf("enter +ve integer");
		scanf("%d",&a);
		if(a<0)	
		{
		printf("you entered -ve integer\n");
		continue;
		}
	sum += a;
	i++;
average=(float)sum/n;
}
return average;
}

