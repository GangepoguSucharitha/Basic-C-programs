#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 values");
	scanf("%d %d %d",&a,&b,&c);
	a>b? printf("%d",a>c? a:c):printf("%d",b>c? b:c); 
	//printf("%d",a>b? (a>c? a:c): (b>c? b:c));
}
