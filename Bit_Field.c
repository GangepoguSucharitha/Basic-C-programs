#include<stdio.h>
struct time{
	unsigned int h;
	unsigned int m;
	unsigned int s;
	
}t={10,30,50};
main()
{
	printf("%u %u %u",t.h,t.m,t.s); 
	printf("\n %u",sizeof(t));  //12 bits
}
