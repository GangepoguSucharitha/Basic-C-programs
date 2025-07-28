// marks and grade : WITH RETURN, WITH ARG
#include<stdio.h>
char grade(int marks)
{
 if(marks>500)
 return 'A';
 else 
 if(marks<500 && marks>400)
 return 'B';
 else
 return 'F';
 
}
main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	printf("%c",grade(marks));
}
