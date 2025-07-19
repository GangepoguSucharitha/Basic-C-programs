//Multiplication of matrix (both matrices are different order)
#include<stdio.h>
main()
{
	int a[50][50],b[50][50],m[50][50]={0},R1,C1,R2,C2,i,j,k;
	
	printf("enter R1 and C1:\n");
	scanf("%d%d",&R1,&C1);
	printf("\nEnter Matrix A elements:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("enter R2 and C2:\n");
	scanf("%d%d",&R2,&C2);
	printf("Enter Matrix B elts:\n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
			scanf("%d",&b[i][j]);
	}
	
if(R2==C1)
{
printf("\n Multiplication Matrix:\n");
for(i=0;i<R1;i++)
	{
	for(j=0;j<C2;j++)
		{
		for(k=0;k<C2;k++)
			m[i][j] += a[i][k]*b[k][j];
		printf("\t%d",m[i][j]);
	}
	printf("\n");	
	}		
}
else
printf("\n(R2!=C1) Multiplication is not possible!\n");
}
