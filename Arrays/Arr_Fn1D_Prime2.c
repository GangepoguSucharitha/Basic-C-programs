//Passing whole array to Fn's
//Prime or not
#include<stdio.h>
int SIZE;
void prime(int b[]);
void even(int e[]);

main()
{
	int a[50],i;
	printf("Enter size:\n");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
	printf("\nEnter array elt a[%d]:\n",i);
	scanf("%d",&a[i]);
	}
	prime(a);
	even(a);
}
void prime(int b[])
{
	int i,j,count=0;
	for(i=0;i<SIZE;i++)
	{   count=0;
		for(j=1;j<=b[i];j++)
		{
			if(b[i]%j==0)
			count++;
		}
		if(count==2)	
			printf("%d is prime\n",b[i]);
		else
			printf("%d is not prime\n",b[i]);	
	}
}

void even(int e[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
	if(e[i]%2==0)
		printf("%d is Even\n",e[i]);
	else
		printf("%d is Odd\n",e[i]);
	}
}



