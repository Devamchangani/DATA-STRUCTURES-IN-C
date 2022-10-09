/*
 * q10.c
 *
 *  Created on: 17-Aug-2022
 *      Author: root
 */

#include<stdio.h>
#define n 10

int main()
{
	int arr[n];
	int *p = &arr[0];
	int i=0,pos;

	for(i=0;i<n;i++)
	{
		printf("\n > Enter the value for %d Element : ",i);
		scanf("%d",(p+i));
	}

	printf("\n > Your array : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}


	printf("\n\n > Enter the position which you want to delete : ");
	scanf("%d",&pos);

	if(pos>0 && pos<=n)
	{

		for(i=pos;i<n;i++)
		{
			*(p+i-1)=*(p+i);
		}

		printf("\n > Your updated array : ");
		for(i=0;i<n-1;i++)
		{
			printf("%d ",*(p+i));
		}
	}
	else
	{
		printf("\n Out Of Range !!! ");
	}

}

