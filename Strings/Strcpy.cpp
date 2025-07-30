//using Stringcopy function
#include<stdio.h>
#include<string.h>
main()
{
	char st1[20],st2[20];
	printf("Enter String:\n");
	scanf("%s",st1);
	
	printf("%u\n",strlen(st1));      //to print length of string
		strcpy(st2,st1);              //coping from st1 to st2
	if(strcmp(st2,st1)==0)
		printf("Both strings are same\n");
	else
		printf("Both strings are not same\n");
	}
