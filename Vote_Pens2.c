//eligible for Vote or Pension or not
#include<stdio.h>
main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>18)
	{
		if(age>60)
		printf("Eligible for Voting and Pension");
		else
	    printf("Eligible for vote only");
    }
	else
	printf("Eligible for nothing");
}

