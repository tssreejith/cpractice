/*
 * fibonacci.c
 *
 *  Created on: Nov. 28, 2019
 *      Author: sreejith
 */

#include<stdio.h>
int main()
{
	int i,n;
	int a=0,b=1,c;
	printf("Enter the number of elemnts");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

	printf("%d",a);
	c=a+b;
	a=b;
	b=c;

	}
		return a;

}
