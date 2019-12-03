/*
 * sort.c
 *
 *  Created on: Nov. 28, 2019
 *      Author: sreejith
 */

#include<stdio.h>
int main()
{
	int i,x,n,j ;
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
		for(int j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])    //change greater than sign for ascending
			{
				x=array[j];
				array[j]=array[j+1];
				array[j+1]=x;
			}
		}
	}
	printf("sorted array is \n");
	for(j=0;j<n;j++)
	{

	printf("%d \t",array[j]);
	}

	return x;
}
