/*
 * selectionsort.c
 *
 *  Created on: Nov. 28, 2019
 *      Author: sreejith
 */

#include<stdio.h>
int main()
{
	int i,x,n,j,min ;
	int array[10];
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
				for(j=i+1;j<n;j++)
				{
					if(array[j]<array[min])
					{
						min=j;

					}
				}
					x=array[i];
					array[i]=array[min];
					array[min]=x;

	}
	printf("sorted array is \n");
	for(j=0;j<n;j++)
	{

	printf("%d \t",array[j]);
	}

	return x;
}
