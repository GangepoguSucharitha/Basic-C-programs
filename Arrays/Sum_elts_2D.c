//Print Sum of all the elements in Matrix
#include <stdio.h>
#define R 3
#define C 3
main() 
{
    int a[R][C],i,j,sum=0;
    printf("Enter a %dx%d matrix:\n", R,C);
    for(i=0; i<R; i++)
    {
		for(j=0; j<C; j++)
            scanf("%d",&a[i][j]);
	}
    for(i=0; i<R; i++) 
	{
        for(j=0; j<C; j++) 
        sum += a[i][j];
}
printf("\tSum = %d",sum);
}
