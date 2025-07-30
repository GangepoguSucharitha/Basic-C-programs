// Recursive function to print numbers from 1 to n
#include <stdio.h>
void printNum(int n);
main() 
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Numbers from 1 to %d are: ", n);
	printNum(n);
}

void printNum(int n) 
{
	if (n == 0) 
		return;
	//printf("%d ",n);  // Print the current number
	printNum(n-1);  // Recursive call to printNumbers with n-1
	printf("%d ",n); 
}
