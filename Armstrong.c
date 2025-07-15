//checking Armstrong number or not
#include <stdio.h>
int main() {
    int n,temp,r, arm=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n>0)   //n=153		  15>0			1>0 		0>0 (false)
	{
        r = n% 10; // 3 			5  			1
       arm += r * r * r; //3^3		27+5^3 		27+125+1^3
       n /= 10; // 15				15/10=1 	1/10=0
    }
	n=temp;
    if (arm == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
}
