/*
 * q5.c
 *
 *  Created on: 01-Aug-2022
 *      Author: root
 */


#include<stdio.h>

int main()
{
	char a[10],*cp;
	cp=&a[0];
	int l=0;

	printf("\n > Enter your string : ");
	scanf("%s",a);

	for(int i=0;cp[i]!='\0';i++)
	{
		//printf("%c ",a[i]);
		//printf("%c ",*cp);
		l++;
	}

	printf("\n\n > length of the string is : %d ",l);

	return 0;
}
