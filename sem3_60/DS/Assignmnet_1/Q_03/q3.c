/*
 * q3.c
 *
 *  Created on: 25-Jul-2022
 *      Author: root
 */


#include<stdio.h>

int main()
{
	int a[10],*p,i;
	p=&a[0];

	for(i=0;i<10;i++)
	{
		printf("\n Enter the value for %d ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\n > value at *p++ : %d ",*p++);
	printf("\n > value at *(p++) : %d ",*(p++));
	printf("\n > value at *(p--) : %d ",*(p--));
	printf("\n > value at *p-- : %d ",*p--);

	return 0;
}

/*
	printf("\n %u",p);		//&a[0]
	printf("\n %d",*p);		//value@ a[0]
	printf("\n %u",p++);	//&a[0] than point to &a[1]
	printf("\n %d",*p);
	printf("\n %d",*p++);	//value@a[2] than increment
	printf("\n %d",*p);
	printf("\n %u",p);		//after increment print the value
	printf("\n %u",p--);	//&a[0] than point to &a[1]
	printf("\n %d",*p);

*/
