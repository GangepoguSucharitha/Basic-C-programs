//eligible for Vote or Pension or not
#include<stdio.h>
main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>18 && age>60)
	printf("Your eligible for both vote and Pension");
	else
		{
		if(age>18 && age<60)
		printf("Eligible for Vote only");
		else
		printf("Not eligible for anything");
	}
}
