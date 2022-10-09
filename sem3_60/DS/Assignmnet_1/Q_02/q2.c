/*
 * q2.c
 *
 *  Created on: 25-Jul-2022
 *      Author: root
 */


#include<stdio.h>

int main()
{
	int a[10],*p,i;
	p=&a[0];

	for(i=0;i<10;i++)
	{
		printf("\n Enter the value for %d ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\n > value at a : %d ",a);
	printf("\n > Value at &a : %u ",&a);
	printf("\n > Value at &p : %u ",&p);
	printf("\n > Value at p : %d ",p);
	printf("\n > Value at p++ : %u ",p++);

	return 0;
}
