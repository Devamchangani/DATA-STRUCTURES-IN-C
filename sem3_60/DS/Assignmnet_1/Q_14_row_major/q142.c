/*
 * q142.c
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */


							// For 2-D Character Array //

							// Using Row Major Order //

#include<stdio.h>

int main()
{
	int c=0,i=0,j=0;
	long long ans=0,lo=0;
	int m=0,n=0;

	printf("\n > Enter the row & column of array : ");
	scanf("%d %d",&m,&n);
	char ch[m][n];

	//printf("\n > Base address : %ld ",&ch[0][0]);

	printf("\n > Enter the location of element : ");
	scanf("%d %d",&i,&j);

	lo = (long long )ch[0][0];

	c=1;

	printf("\n > base address : %lld ",lo);

	ans = lo + c * ( (n*(i-1)) + (j-1) );

	printf("\n\n >> The location of %d %d th element using row major order : %lld ",i,j,ans);
	return 0;
}


