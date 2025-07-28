//Arithmatic calculation using Fn with return and without Arg
#include<stdio.h>
int sum( );
int sub( );
int mul( );
int div( );
main()
{
	int S,S2,M,D;
	S=sum( );
	//printf("%d\n",S);
	S2=sub( );
	M=mul( );
	D=div( );
	printf("%d\n%d\n%d\n%d\n",S,S2,M,D);
}
int sum( )
{
 int sum,a,b;
 printf("enter a,b\n");
 scanf("%d %d",&a,&b);
 sum=a+b;
 return sum;	
}
int sub( )
{
int sub,a,b;
 printf("enter a,b\n");
 scanf("%d %d",&a,&b);
 sub=a-b;
 return sub;
}
int mul( )
{
int mul,a,b;
 printf("enter a,b\n");
 scanf("%d %d",&a,&b);
 mul=a*b;
 return mul;	
}
int div( )
{
int div,a,b;
 printf("enter a,b\n");
 scanf("%d %d",&a,&b);
 div=a/b;
 return div;	
}
