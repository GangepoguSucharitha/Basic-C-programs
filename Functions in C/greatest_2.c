//greatest of 2 no's WITH RETURN, WITH ARG
#include<stdio.h>
int greatest(int,int);
main ()
{
 int a,b;
 printf("enter a,b");
 scanf("%d %d",&a,&b);
 printf("%d",greatest(a,b));
}
int greatest(int a,int b)
{
 if(a>b)
return a;//printf("%d is greater",a);
 else
 return b;//printf("%d is greater",b);
 	
}


