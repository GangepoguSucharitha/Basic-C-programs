
#include<stdio.h>
#include<string.h>
main()
{
	char st[50];
	int l=0,i,temp;
	printf("Enter String:\n");
	scanf("%[\n]d",st);
	char S=st[i];
	for(i=0;st[i]!='\0';i++)
	l++;
	for(i=0;st[i]!='\0';i++)
	{
	st[i]=tolower(st);
	}
	for(i=0;i<l/2;i++)
		{
		temp=st[i];
		st[i]=st[l-i-1];
		st[l-i-1]=temp;
	}
	if(S==st[i])
		printf("It's Palindrome\n");
	else
		printf("It's not Palindrome\n");	
		
}
