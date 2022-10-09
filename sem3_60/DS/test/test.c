/*
 * test.c
 *
 *  Created on: 18-Jun-2022
 *      Author: root
 */

#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},*p,*q,i;
	int n=55;
	p=&a[0];
	q=&n;

	/*
	for(i=0;i<10;i++)
	{
		printf("\n > Enter the value for %d ",i+1);
		scanf("%d",(p+i));
	}

	printf("\n > your array is : ");
	for(i=0;i<10;i++)
	{
		printf(" %d ",*(p+i));
	}
	*/

	//printf(" %d ",*( 1443016908));


	printf("\n %u",p);		//&a[0]
	printf("\n %d",*p);		//value@ a[0]
	printf("\n %u",p++);	//&a[0] than point to &a[1]
	printf("\n %d",*p);
	printf("\n %d",*p++);	//value@a[2] than increment
	printf("\n %d",*p);
	printf("\n %u",p);		//after increment print the value


	/*
	p=p+3;

	printf("\n %u",&p);
	printf("\n %d",*p);
	printf("\n %d",*p++);
	printf("\n %u",p);
	printf("\n %u",*p);
	printf("\n %d",*(p++));
	printf("\n %u",p);
	printf("\n %d",*p--);
	printf("\n %u",p);
	printf("\n %d",*(p--));
	*/
	return 0;
}
