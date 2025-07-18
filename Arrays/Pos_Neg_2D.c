//Count positive,Negative and Zeros in given matrix
#include <stdio.h>
#define R 3
#define C 3
main() 
{
    int a[R][C], i, j;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter a %dx%d matrix:\n", R, C);
    for(i=0; i<R; i++)
        {
		for(j=0; j<C; j++)
            scanf("%d",&a[i][j]);
	}
    for(i=0; i<R; i++) 
	{
        for(j=0; j<C; j++) 
		{
            if (a[i][j] > 0) 
			pos++;
            else if (a[i][j] < 0) 
			neg++;
            else 
			zero++;
        }
    }
    printf("\tPositive: %d\n\tNegative: %d\n\tZeros: %d\n",pos,neg,zero);
}

