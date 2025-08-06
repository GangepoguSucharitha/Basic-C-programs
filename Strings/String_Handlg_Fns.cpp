#include<stdio.h>
#include<string.h>
main()
{
	char st1[20],st2[30];
	printf("Enter String1:\n");
	gets(st1);           
	puts(st1); 
	printf("Enter String2:\n");
	gets(st2);           
	puts(st2);
	printf("\nString1 length is:%d\n",strlen(st1)); 
	printf("\nstring copy fn is:%s\n",strcpy(st1,st2));
	printf("string copy upto 'n'is:%s\n",strncpy(st1,st2,20));
	printf("string compare: %s\n",strcmp(st1,st2));
	printf("String reverse:%s\n",strrev(st1)); 
	printf("string copy upto 'n'is:%s\n",strncpy(st1,st2,4));
	       
}
