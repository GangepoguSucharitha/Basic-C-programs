//Add & Sub in one program
#include<stdio.h>
#define R 2
#define C 3
main()
{
	int a[R][C],b[R][C],Sum[R][C],Sub[R][C],m[R][C],i,j,k;
	printf("\nEnter Matrix elements:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("enter a[%d][%d] & b[%d][%d]:\n",i,j,i,j);
			scanf("%d%d",&a[i][j],&b[i][j]);
	    }
	}
	printf("Addition is\n");
	for(i=0;i<R;i++)
		{
		for(j=0;j<C;j++)
			{
			Sum[i][j]=a[i][j]+b[i][j];
			printf("\t%d",Sum[i][j]);
			}
	printf("\n");
		}
	printf("Subtraction is\n");
	for(i=0;i<R;i++)
		{
		for(j=0;j<C;j++)
			{
			Sub[i][j]=a[i][j]-b[i][j];
			printf("\t%d",Sub[i][j]);
			}
	printf("\n");
}

}

