/*
 * sumofelement.c
 *
 *  Created on: Dec. 21, 2019
 *      Author: sreejith
 */

#include<stdio.h>

int main()
{
int a[5]={1,2,3,4,5};
int sum=0;
for(int i=0;i<5;i++)
sum=sum+a[i];
printf("%d\n",sum);
return 0;
}
