//Reverse of given array
#include<stdio.h>
void reverse(int b[],int size);
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
	reverse(a,size);
}
void reverse(int b[],int size)
{
	int i,temp;
	
	for(i=0;i<size/2;i++)
	{
		temp=b[i];
		b[i]=b[size-i-1];
		b[size-i-1]=temp;
	}
	printf("\nReversed Array\n");
	for(i=0;i<size;i++)
	printf("\t%d",b[i]);
}
