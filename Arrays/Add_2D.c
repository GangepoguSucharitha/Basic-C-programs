//ADDITION of 2-D array
/*#include<stdio.h>
#define R 3
#define C 2
main()
{
	int a[R][C],b[R][C],Sum[R][C],i,j;
	printf("\nEnter Matrix elements:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("enter a[%d][%d] & b[%d][%d]",i,j,i,j);
			scanf("%d%d",&a[i][j],&b[i][j]);
	    }
	}
	for(i=0;i<R;i++)
		{
		for(j=0;j<C;j++)
			{
			Sum[i][j]=a[i][j]+b[i][j];
			printf("\t%d",Sum[i][j]);
		}
	printf("\n");
}
}
*/

//ADDITION of 2-D array with FLOAT Values
#include<stdio.h>
#define R 3
#define C 2
main()
{	
	float a[R][C],b[R][C],Sum[R][C]; 
	int i,j;
	printf("\nEnter Matrix elements:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("enter a[%d][%d] & b[%d][%d]\n",i,j,i,j);
			scanf("%f%f",&a[i][j],&b[i][j]);
	    }
	}
	for(i=0;i<R;i++)
		{
		for(j=0;j<C;j++)
			{
			Sum[i][j]=a[i][j]+b[i][j];
			printf("%f\t",Sum[i][j]); //%.2f - it prints exactly 2digits after the decimal point.
		}
	printf("\n");
}
}
