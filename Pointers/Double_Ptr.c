//Double pointer
#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;  // p is pointing to 'a' variable
	int **q=&p;  // q is double ptr & q pointing to 'p' which is single ptr
	printf("a=%d %d %d\n",a,*p,**q);
	
	*p = 12; //accessing 'a' using Ptr(*p)
	printf("a=%d\n",a);
	
	**q=17; //accessing 'a' using double Ptr(**q)
	printf("a=%d\n",a);
	
	int ***r = &q; // r is triple Ptr pointing to q double Ptr
	printf("a=%d\n",a);
	
	printf("address of q=%u %u\n",r,&q);
	printf("address of p=%u %u\n",q,&p);
	
}













