//Sum of integers using calloc and resize with realloc()

#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=NULL,i,n,sum=0;
	float *ptr1,sum1=0;
	printf("enter number n:\n");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Mem Not allocated\n");
	}
	else
	{
	printf("Mem allocated successfully\n");
	printf("Enter integers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum +=*(ptr+i);
	}
	printf("Sum of integers:%d\n",sum);	
	printf("Enter resize value:");
	scanf("%d",&n);
	ptr1=(float*)realloc(ptr,n*sizeof(float));
	if(ptr1==NULL)
	printf("Mem reallocation failed\n");
	else
	{
		printf("Mem reallocated successfully\n");
		printf("Enter Float values:\n");
		for(i=0;i<n;i++)
		{
			scanf("%f",ptr1+i);
			sum1 += *(ptr1+i);
		}
	printf("Float value sum1=%f\n",sum1);
	free(ptr1);	
	}
	
	printf("%u",ptr1);
}
}
