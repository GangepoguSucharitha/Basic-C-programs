#include<stdio.h>
main()
{
	int x;
	printf("enter any number");
	scanf("%d",&x);
	x>0? printf("positive"): (x<0? printf("negative"):printf("Zero"));
}
