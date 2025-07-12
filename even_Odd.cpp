//Find Even or odd
#include<stdio.h>
main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	a%2 ? printf("odd"): printf("even"); //Rem=0 then it's Even or else Odd
	//a%2==0 ? printf("even") : printf("odd");
	
}
