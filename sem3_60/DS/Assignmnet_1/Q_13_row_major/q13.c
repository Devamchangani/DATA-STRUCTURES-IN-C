/*
 * q13.c
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */


							// For 2-D Integer Array //

							// Using Row Major Order //

#include<stdio.h>

int main()
{
	int c=0,i=0,j=0;
	long long lo=0,ans=0;
	int m=0,n=0;

	printf("\n > Enter the row & column of array : ");
	scanf("%d %d",&m,&n);

	int arr[m][n];

	lo=(long long)arr[0][0];

	printf("\n > The Base Address : %lld ",lo);


	printf("\n > Enter the location of element : ");
	scanf("%d %d",&i,&j);

	c=4;

	ans=lo + c * ( (n*(i-1)) + (j-1) );

	printf("\n\n >> The location of %d th element using row major order : %lld ",i,ans);
	return 0;
}

