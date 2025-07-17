//using Switch- Prime,Factorial,Even
#include<stdio.h>
main()
{
	int i,a,count=0,f=1;
	printf("enter a");
	scanf("%d",&a);
	printf("Select 1-Prime,2-Factorial,3-Even,4-+ve or -ve\n");
	printf("enter i");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			for(i=1;i<=a;i++)
			if(a%i==0)
			count++;
		if(count==2)
			printf("Prime");
		else
		printf("not prime");
		break;
		case 2:
			for(i=1;i<=a;i++)
			f*=i;
			printf("%d",f);
			break;
		case 3:
			if(a%2==0)
			printf("%d is even",a);
			else
			printf("%d is odd",a);
			break;
		case 4:
			a>0 ? printf("Positive no.") : printf("Negative no.");
			break;
		default:
			printf("wrong choice");
	}
}
			
