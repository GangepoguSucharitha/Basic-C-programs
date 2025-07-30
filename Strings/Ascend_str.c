//Ascending Alphabetic order of string
#include<stdio.h>
main()
{
	char st[20]="welcome";
	int l=0,i,j,temp;
	for(i=0;st[i]!='\0';i++)
	l++;
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(st[i]>st[j])   //	if(st[i]<st[j]) for Descending of string
				{
				temp=st[i];
				st[i]=st[j];
				st[j]=temp;
				}
		}
}
	printf("%s",st);

}
