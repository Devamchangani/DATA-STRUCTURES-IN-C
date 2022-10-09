/*
 * pl.c
 *
 *  Created on: 29-Jun-2022
 *      Author: root
 */

#include<stdio.h>

int main()
{
	char a[10],*p;

	printf("\n > Enter your string : ");
	scanf("%s",a);

	printf("\n > Your string is ");

	for(p=&a[0];*p;p++)	//*p =~ *p=='\0'
	{
		printf(" %c ",*p);
	}

	return 0;
}
