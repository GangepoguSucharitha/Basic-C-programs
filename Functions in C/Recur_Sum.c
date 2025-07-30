//Sum using RECURSIVE fn
#include<stdio.h>
int sum(int a);
 main() 
{
  printf("%d", sum(10));
}

int sum(int a) 
{
  if (a>0) 
    return a+sum(a-1);
   else 
    return 0;
}
