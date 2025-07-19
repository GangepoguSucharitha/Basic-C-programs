//Printing mXn matrix
#include<stdio.h>
main()
{
	int a[10][10],r,c,i,j;
	printf("\nEnter no of rows:");
	scanf("%d",&r);
	printf("\nEnter no of columns:");
	scanf("%d",&c);
	printf("\nEnter %d Matrix elements:",(r*c));
	for(i=0;i<r;i++)		//Reading
	{
	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
	printf("\nThe Matrix is......\n");
	for(i=0;i<r;i++)		//writing
	{
	for(j=0;j<c;j++)
	{
	printf("\t%d",a[i][j]);
	}
	printf("\n");
	}
}

