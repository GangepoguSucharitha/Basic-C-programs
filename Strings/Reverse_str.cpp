//print Reverse of string
#include<stdio.h>
main()
{
	char st[20];
	int i,l=0,temp;
	printf("Enter String:\n");
	gets(st);              //scanf("%s",st);       
	for(i=0;st[i]!='\0';i++)
		l++;
	for(i=0;i<l/2;i++)
	{
		temp=st[i];
		st[i]=st[l-i-1];
		st[l-i-1]=temp;
	}
	puts(st);    //printf("%s",st);
}
