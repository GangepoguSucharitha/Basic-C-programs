//Even no's from n
#include<stdio.h>
main()
{
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	if(n%2==0)
		{
		for(i=n;i>1;i=i-2)
		printf("%d\n",i);
	}
    else
		{
		n--;
		for(i=n;i>1;i=i-2)
		printf("%d\n",i);
		}
}
