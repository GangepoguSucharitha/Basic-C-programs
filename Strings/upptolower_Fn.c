//Converting a string Upper to lower using Functions
#include<stdio.h>
void uptolower(char st[]);
void lowtoup(char st[]);
main()
{
	char st1[20],st2[20];
	char city[]="HYDERabad";
	printf("string to change Up to lowercase:\n");
	scanf("%s",st1);
	uptolower(st1);
	uptolower(city);
	
	printf("string to change Lower to uppercase:\n");
	scanf("%s",st2);
	lowtoup(st2);
}
void uptolower(char st[])
{
	int i;
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]<91)
			st[i] += 32;
	}
	printf("%s\n",st);
}
void lowtoup(char st[])
{
	int i;
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>97)
			st[i] -= 32;
	}
	printf("%s\n",st);
}



