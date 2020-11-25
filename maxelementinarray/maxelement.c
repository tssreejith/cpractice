/*
 * maxelement.c
 *
 *  Created on: Dec. 21, 2019
 *      Author: sreejith
 */

#include<stdio.h>

int main()
{
int a[5]={1,2,3,4,5};
int max=0;
for(int i=0;i<5;i++){
if(a[i]>max)
{
max=a[i];
}
}
printf("%d\n",max);
return 0;
}
