//Ascending Alphabetical order of string Using Fn
#include<stdio.h>
void StrAscen(char st[]);
void StrDecen(char st[]);
main()
{
	char st[20];
	printf("enter string to Ascending:\n");
	scanf("%s",st);
	StrAscen(st);
	StrDecen(st);
		
}
void StrAscen(char st[])
{
	int i,j,temp,l;
	for(i=0;st[i]!='\0';i++)
	l++;
	
	for(i=0;i<=l-1;i++)  //for(i=0;st[i]!=0;i++)  this also correct
	{
		for(j=i+1;j<l;j++)
		{
		if(st[i]>st[j])   //if(st[i]<st[j]);  for Descending alphabetical order
			{
			temp=st[i];
			st[i]=st[j];
			st[j]=temp;
		}
		}
	}
	printf("Ascended string is:%s\n",st);
}

void StrDecen(char st[])
{
	int i,j,temp,l;
	for(i=0;st[i]!='\0';i++)
	l++;
	
	for(i=0;st[i]!=0;i++)
		{
			for(j=i+1;j<l;j++)
			{
				if(st[i]<st[j])
				{
					temp=st[i];
					st[i]=st[j];
					st[j]=temp;
				}
			}
		}
		printf("\nDescended String is: %s\n",st);
}

