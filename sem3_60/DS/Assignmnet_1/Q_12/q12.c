/*
 * q12.c
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */


							// For 1-D Character Array //

#include<stdio.h>

int main()
{
	long long lo=0,ans=0;
	int c=0,i=0;
	int lb=0,ub=0,size=0;

	printf("\n > Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	lo=(long long)arr[0];

	printf("\n > The Base Address : %lld ",lo);

	printf("\n > Enter the location of element : ");
	scanf("%d",&i);

	ub=size-1;
	lb=0;
	c=1;

	ans=(long long)lo + c *(i-lb);

	printf("\n\n >> The location of %d th element : %lld ",i,ans);
	return 0;
}

