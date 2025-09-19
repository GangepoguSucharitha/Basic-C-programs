//Read & write 3 student details using Array Structure
#include<stdio.h>
struct
{
	char n[20];
	int r;
	float m;
}st[3];
main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Student %d details:",i+1);
		scanf("%s %d %f",st[i].n,&st[i].r,&st[i].m);
	}
	for(i=0;i<3;i++)
	{
		printf("\nStudent %d details:",i+1);
		printf("%s %d %f\n",st[i].n,st[i].r,st[i].m);
	}
}
