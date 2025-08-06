//Understand Normal Ptr & Array Ptr
#include<stdio.h>
main()
{
	int a[5]={1,3,5,-6,10},i;
	int *ptr=a;             //pointing to base Addr
	int (*ptr1)[5];      //Array Ptr
	
	ptr1=&a;            //Pointing to Whole Array
	printf("%u %u\n",ptr,ptr1);
	
	ptr++;             //incrementing to next array  elt
	ptr1++;            // incrementing to next variable
	
	printf("%u %u\n",ptr,ptr1);
}









