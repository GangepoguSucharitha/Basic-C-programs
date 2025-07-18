//print Greatest elt in given Array
#include<stdio.h>
void greatest(int b[],int size);
void smallest(int b[],int size);
main()
{
	int a[50],i,size;
	printf("Enter size:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter Array elt a[%d] :\n",i);
		scanf("%d",&a[i]);
	}
	greatest(a,size);
	smallest(a,size);
}
void greatest(int b[],int size)
{
	int i,greatest=b[0];
	for(i=1;i<size;i++)
	{
		if(greatest<b[i])
			greatest=b[i];
	}
	printf("\nGreatest elt = %d",greatest);
}

void smallest(int b[],int size)
{
	int i,smallest=b[0];
	for(i=1;i<size;i++)
	{
		if(smallest>b[i])
			smallest=b[i];
	}
	printf("\nSmallest elt = %d",smallest);
}




