//Sum of 2 Arrays
#include<stdio.h>
int size;
void add(int x[],int y[]);
main()
{
	int a[50],b[50],i;
	printf("Enter size:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter Array elts a[%d] & b[%d] :\n",i,i);
		scanf("%d%d",&a[i],&b[i]);
	}
	add(a,b);
}

void add(int x[],int y[])
{
	int sum[50],i;
	printf(" Sum:\n");
	for(i=0;i<size;i++)
	{
	sum[i]=x[i]+y[i];
	printf("\t%d",sum[i]);	
	}
	
}
