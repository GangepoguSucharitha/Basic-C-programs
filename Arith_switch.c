//Arithmatic calculation using Switch 
#include<stdio.h>
main()
{
	int i,a,b;
	printf("enter a,b");
	scanf("%d %d",&a,&b);
	printf("Select 1-Add,2-Sub,3-Mul,4-Div,5-Mod\n");
	printf("enter i");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		printf("%d",a+b);
		break;
		case 2:
		printf("%d",a-b);
		break;
		case 3:
		printf("%d",a*b);
		break;
		case 4:
		printf("%d",a/b);
		break;
		case 5:
		printf("%d",a%b);
		break;
		default:
		printf("wrong choice"); 
	}
}
