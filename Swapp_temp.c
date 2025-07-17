// swapping of 2 numbers using Temp variable
#include<stdio.h>
 main()
{
    int x = 10, y = 15, temp;
    temp = x;		//temp=10
    x = y;			//x=15
    y = temp;		//y=10
    printf("After swapping x = %d and y = %d", x, y);
}
