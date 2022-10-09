/*
 * q1.c
 *
 *  Created on: 25-Jul-2022
 *      Author: root
 */
#include<stdio.h>

int main()
{
	int a[10],max,*p,i;
	p=&a[0];

	for(i=0;i<10;i++)
	{
		printf("\n Enter the value for %d ",i+1);
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
	}

	printf("\n > The maximum number is %d ",max);

	return 0;
}
