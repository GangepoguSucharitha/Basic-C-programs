//greatest of 3 no's
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 no's");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is greater",a);
		else
			printf("%d is greater",c);
   }
	else
	{
		if(b>c)
		printf("%d is greater",b);
		else
		printf("%d is greater",c);
	}
	
}
