//passing individual Array to Fn
//print Prime or not   //even or odd   // Factorial  //Palindrome
#include<stdio.h>
int SIZE;
void prime(int);
void even(int);
void fact(int);
void palindrome(int);
main()
{
	int a[50],i;
	printf("Enter size:\n");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
	printf("\nEnter array elt a[%d]:\n",i);
	scanf("%d",&a[i]);
	prime(a[i]);
	even(a[i]);
	fact(a[i]);
	palindrome(a[i]);
	}
}
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
		if(count==2)
			printf("%d is prime \n",n);
		else
			printf("%d is not prime \n",n);

}
void even(n)
{
	int i;
	
		if(n%2==0)
		{
		printf("%d is Even\n",n);
		}
		else
			printf("%d is Odd\n",n);
	}
void fact(n)
{
	int i;
	unsigned long long f=1;
	for(i=1;i<=n;i++)
	f = f*i;
	printf("Factorial of %d = %lld\n",n,f); // %lld- print large factorial no's

}
void palindrome(n)
{
	int i,r,rev=0,temp;
	temp=n;
	for(i=0;n>0;i++)    //while(n>0);
	{
		r=n%10;
		rev=rev*10+r;
		n /=10;
	}
	if(temp==rev)
		printf("%d is palindrome\n",temp);
	else
		printf("%d is not palindrome\n",temp);
}



