//Multiplication of matrix (both matrices are same size 2X2 or 3X3)
#include<stdio.h>
#define R 3
#define C 3 
main()
{
	int a[R][C],b[R][C],m[R][C]={0},i,j,k;
	printf("\nEnter Matrix A elements:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter Matrix B elts:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
			scanf("%d",&b[i][j]);
	}
printf("\n Multiplication Matrix:\n");
for(i=0;i<R;i++)
	{
	for(j=0;j<C;j++)
		{
		for(k=0;k<C;k++)
		{
			m[i][j] += a[i][k]*b[k][j];
		}
		printf("\t%d",m[i][j]);
	}
	printf("\n");	
}		
}
