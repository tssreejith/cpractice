/*
 * sumusingfunction.c
 *
 *  Created on: Dec. 28, 2019
 *      Author: sreejith
 */

#include<stdio.h>

int sum(int a, int b)
{
	int c=a+b;
	return c;
}

int main()
{
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	c=sum(a,b);
	printf("Sum is %d", c);
	return 0;
}

