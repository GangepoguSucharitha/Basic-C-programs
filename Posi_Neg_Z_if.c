//check num is +ve or -ve or Zero
#include<stdio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a>0)
		printf("%d is positive",a);
	else
		{
		 if(a<0)
			printf("%d is Negative",a);
		else
			printf("%d is Zero",a);
	    }
}
