

//Prime no. or not WITH RETURN,WITHOUT ARG
#include<stdio.h>
int prime( );
main()
{
 prime( );
 prime( );	
}
int prime( )
{
	int n,i,count=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	count++;
}
if(count==2)
printf("%d is Prime\n",n);
else
printf("%d is not prime\n",n);
}






	
