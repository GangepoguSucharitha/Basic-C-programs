//Pointer Addition
#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	printf("value of a=%d %d %d\n",a,&a,&p);
	printf("p=%d\n",p);
	p=p+1;        //p returns address
	printf("p=%d\n",p);
	p=p+2;
	printf("p=%d\n",p);
}


