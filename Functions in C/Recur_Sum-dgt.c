// Recursive function to calculate the sum of digits of n
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of digits: %d\n",SumofDgt(n)); //calling   
}
int SumofDgt(int n) 
{
    if (n < 10) //return n if it's a single-digit number 
        return n;
    else
    return (n%10)+SumofDgt(n/10); // Recursive call
}



