#include<stdio.h>
struct time{
	unsigned int h:18;
	unsigned int m:13;
	unsigned int s:6;
	
}t={10,30,50};
main()
{
	printf("%u %u %u",t.h,t.m,t.s); 
	printf("\n %u",sizeof(t));  //struct is often padded to 8 bytes
}
