//Print Identity matrix
#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c;
	printf("Enter no of rows and columns:\n");
	scanf("%d%d",&r,&c);
	if(r==c)
	{	
		for(i=0;i<r;i++)
			{
			for(j=0;j<c;j++)
			{
		 if (i == j)        // if(i==j && a[i][j] != 1)
			printf("\t1");
		else
			printf("\t0");
			}
	printf("\n");
		}
	}
	else
	printf("Identity matrix not possible\n");
}
