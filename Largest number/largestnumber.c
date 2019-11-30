/*
 * largest number in an array.c
 *
 *  Created on: Nov. 28, 2019
 *      Author: sreejith
 */


#include<stdio.h>
int main()
{
	int i,x,n ;
	int array[10];
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	x=array[0];
	for (i=1;i<n;i++)
	{
		if(array[i]>x)
		{
			x=array[i];

		}

	}
	printf("GREATEST NUMBER IS%d",x);
	return x;
}
