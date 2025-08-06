//Smallest and greatest of n integers using malloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=NULL,i,n,greatest,smallest;
	printf("enter number n:\n");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	if(ptr==NULL)
		printf("Mem Not allocated\n");
		
	else
	{
	printf("Mem allocated successfully\n");
	printf("Enter integers:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",ptr+i);
	}
	greatest=*(ptr+0);
	smallest=*(ptr+0);
	for(i=1;i<n;i++)
		{
			if(greatest<*(ptr+i))
			greatest= *(ptr+i);
			
			if(smallest>*(ptr+i))
			smallest= *(ptr+i);
		}
	
	printf("Greatest integer is:%d\n",greatest);
	printf("Smallest integer is:%d\n",smallest);
}
free(ptr);
}
