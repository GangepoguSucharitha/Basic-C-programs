//Reverse of N integers using malloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=NULL,i,temp,n;
	printf("enter n:\n");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	printf("Memory not allocated\n");
	else
	{
		printf("Memory Allocated Successfully\n");
		printf("Enter integers:\n");
		for(i=0;i<n;i++)
		{
		scanf("%d",ptr+i);
	}
		for(i=0;i<n/2;i++)
			{
				temp=*(ptr+i);
				*(ptr+i)= *(ptr+(n-i-1));
				*(ptr+(n-i-1)) =temp;	
			}
		printf("Reverse of integers:\n");
		for(i=0;i<n;i++)
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
}
