//string reverse using Functions
#include<stdio.h>
void strreverse(char st[]);
main()
{
	char st[20];
	char city[]="Hyderabad Hi";
	printf("enter string:\n");
	scanf("%s",st);
	strreverse(st);
	strreverse(city);
}

void strreverse(char st[])
{
	int i,l=0,temp;
	for(i=0;st[i]!='\0';i++)
	l++;
	for(i=0;i<l/2;i++)
	{
		temp=st[i];
		st[i]=st[l-i-1];
		st[l-i-1]=temp;
	}
	puts(st); //print the string including spaces
}
