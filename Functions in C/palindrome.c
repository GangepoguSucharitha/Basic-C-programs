//Palindrome num:  WITHOUT RETURN, WITH ARG
#include<stdio.h>
void palindrome(int);
main()
{
	int n;
	printf("enter number n");
	scanf("%d",&n);
	palindrome(n); 
}
void palindrome(n)  // or  void palindrome(int n)
{
	int r,rev=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n /= 10;
	}
	if(temp==rev)
	printf("%d is palindrome number",temp);
	else
	printf("%d is not palindrome number",temp);
}

