#include<stdio.h>
main()
{
	int x;
	printf("enter age");
	scanf("%d",&x);
	x>=18 ? printf("Eligible for vote"): printf("Not eligible for vote"); 
}
