/*
 * q14.c
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */

							// For 2-D Character Array //

						  // Using Column Major Order //

#include<stdio.h>

int main()
{
	int c=0,i=0,j=0;
	long long ans=0,lo;
	int m=0,n=0;

	printf("\n > Enter the row & column of array : ");
	scanf("%d %d",&m,&n);
	char ch[m][n];

	lo=(long long)&ch[0][0];

	printf("\n > Enter the location of element : ");
	scanf("%d %d",&i,&j);

	c=1;

	printf("\n > Base address : %lld",lo);

	ans=lo + c * ( (m*(j-1)) + (i-1) );

	printf("\n\n >> The location of %d th element using column major order : %lld ",i,ans);
	return 0;
}



