//Ascending of Array elts
#include<stdio.h>
void Ascen(int b[],int size);
main()
{
	int a[50],size,i;
	printf("enter size:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter Array Elt a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	Ascen(a,size);
}
void Ascen(int b[],int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
		for(j=i+1;j<size;j++)
		{
			if(b[i]>b[j])  //if(b[i]<b[j])  for Descending of elts
			{
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
			}
		}
for(i=0;i<size;i++)
	printf("%d\t",b[i]);

}


