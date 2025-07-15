// print reverse of number
#include<stdio.h>
main()
{
	int n,r,rev=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev = rev*10 +r;
		n /= 10;
	}
	printf("reverse of num is: %d",rev);
}
