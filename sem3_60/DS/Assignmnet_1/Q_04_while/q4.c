/*
 * q4.c
 *
 *  Created on: 25-Jul-2022
 *      Author: root
 */

#include<stdio.h>

int main()
{
	int *fp,*lp,size=0;
	int a[20];

	printf("\n > Enter the size of array(odd) : ");
	scanf("%d",&size);

	if(size%2 == 0)
	{
		for(int i=0;i<size;i++)
		{
			printf("\n Enter the value for %d element : ",i+1);
			scanf("%d",&a[i]);
		}

		fp=&a[0],lp=&a[size-1];

		while( *fp != *lp)
		{
			fp++;
			lp--;
		}

		printf("\n > The middle element of the array  %d ",*fp);//*lp
	}
	else
	{
		printf("\n > Invalid Size !!! ");
	}
	return 0;
}
