//Factorial upto N : using RECURSIVE
#include <stdio.h>
int fact(int n);
main() 
{
  int n,i,f=1;
  printf("Enter the range: \n");
  scanf("%d",&n);

  for(i=1; i<=n; i++) 
    {
	f = fact(i); 
    printf("The factorial of %d is: %d \n", i, f);
}
}
int fact(int n)
{
  if (n==1 || n==0)     //the exit of the recursion
    return 1;
  else 
    return n*fact(n-1);    //function being called within its own body
  
}


