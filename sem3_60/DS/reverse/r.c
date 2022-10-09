/*
 * r.c
 *
 *  Created on: 29-Jun-2022
 *      Author: root
 */

#include<stdio.h>

int main()
{
	char st[15],temp,*s,*e;
	int i,l=0;

	printf("\n > Enter your string : ");
	scanf("%s",st);

	s=&st[0];
	e=&st[0];

	printf("\n > your string : %s ",st);

	/*
	do
	{
		e++;
		l++;
	}while(*e!='\0');

	//printf("%d",l);

	e--;
	*/

	for(i=0;s[i]!='\0';i++)
	{
		l++;
	}
	//printf("%d",l);

	e=e+l-1;

	for(i=0;i<l/2;i++)
	{
		temp=*s;
		*s=*e;
		*e=temp;

		s++;
		e--;
	}

	printf("\n\n > your after reverse string : %s ",st);


	return 0;
}
