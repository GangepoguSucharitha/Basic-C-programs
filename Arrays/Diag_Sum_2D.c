//Print Sum of diagonal elements in Matrix
#include <stdio.h>
#define R 3
#define C 3
main() 
{
    int a[R][C],i,j,dia1=0,dia2=0;
    printf("Enter a %dx%d matrix:\n", R,C);
    for(i=0; i<R; i++)
    {
		for(j=0; j<C; j++)
            scanf("%d",&a[i][j]);
	}
    for(i=0; i<R; i++) 
	{
        dia1 += a[i][i];
        dia2 += a[i][R-i-1];
}
printf("\t 1st Diagonal Sum = %d\n",dia1);
printf("\t 2nd Diagonal Sum = %d\n",dia2);
}

