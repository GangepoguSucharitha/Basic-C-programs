//Arithmatic cal. using Function Ptr
#include<stdio.h>
main()
{
	int x=5,y=20,sum(int,int),(*ptr)(int,int);  //Fn Declaration
	float z=3.4,sub(int,float),(*ptr1)(int,float);
	void mul(int,int),(*ptr2)(int,int);
	ptr=&sum;
	printf("%d\n",ptr(x,y));   //Fn Calling
	ptr1=&sub;
	printf("%f\n",ptr1(x,z));
	ptr2=&mul;
	ptr2(x,y);		
}

int sum(int a,int b)
{
	return a+b;
}
float sub(int a,float b)
{
	return a-b;
}
void mul(int a,int b)
{
	printf("%d\n",a*b);
}
