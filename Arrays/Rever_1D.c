//Reverse of array elements : use swap logic
#include<stdio.h>
main()
{
	int a[50],i,size,temp;
	printf("enter size: ");
	scanf("%d",&size);
	printf("Enter %d array elements: ",size);
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=0;i<size/2;i++)
	{
		temp=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=temp;
	}
	for(i=0;i<size;i++)
	printf("%d",a[i]);
}
