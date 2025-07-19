//Decimal to Binary conversion
#include<stdio.h>
main()
{int n,i=0,a[32],j;
printf("enter n: "); // 12
scanf("%d",&n);
while(n>0)    //12>0, 6>0  3>0  1>0
{
	a[i]=n%2;  // 12%2=0,	6%2=0	3%2=1	1%2=1 
	n/=2;  	// 12/2=6,	
	i++; 	// i=1,	2	3	4
} 						//result= 0011
for(j=i-1;j>=0;j--)
	printf("%d\t",a[j]);
}
