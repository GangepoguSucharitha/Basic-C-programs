//greatest of 3 no's WITH RETURN, WITH ARG 
#include<stdio.h>
int greatest(int,int,int);
main()
{
 int a,b,c;
 printf("enter a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 greatest(a,b,c);
}
int greatest(int a,int b,int c)
 {
 if(a>b && a>c)
 	printf("%d is greater",a);//return a;
 else if(b>a && b>c)
 	printf("%d is greater",b);//return b;
 else
    printf("%d is greater",c);//return c;
}

