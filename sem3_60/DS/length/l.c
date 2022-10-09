/*
 * l.c
 *
 *  Created on: 28-Jun-2022
 *      Author: root
 */

/*

#include<stdio.h>

int main()
{
	char a[5],*cp;
	cp=&a[0];
	int l=0;

	printf("\n > Enter your string : ");
	scanf("%s",a);

	do
	{
		printf("%c*",*cp);
		cp++;
		l++;

	}while(*cp != '\0');

	printf("\n > length of the string is : %d ",l);

	return 0;
}
*/

/*


#include<stdio.h>

int main()
{
	char a[5],*cp;
	cp=&a[0];
	int l=0;

	printf("\n > Enter your string : ");
	scanf("%s",a);

	while(*cp != '\0')
	{
		printf("%c*",*cp);
		cp++;
		l++;

	}

	printf("\n > length of the string is : %d ",l);

	return 0;
}
*/

#include<stdio.h>

int main()
{
	char a[10],*cp;
	cp=&a[0];
	int l=0;

	printf("\n > Enter your string : ");
	scanf("%s",a);

	for(int i=0;a[i]!='\0';i++)
	{
		printf("%c ",a[i]);
		printf("%c ",*cp);
		l++;
		cp++;
	}

	printf("\n\n > length of the string is : %d ",l);

	return 0;
}

