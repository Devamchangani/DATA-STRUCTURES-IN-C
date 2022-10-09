/*
 * q4.c
 *
 *  Created on: 25-Jul-2022
 *      Author: root
 */

// ==================== baki che

#include<stdio.h>

int main()
{
	int *fp,*lp,size;
	int i,a[20];

	printf("\n > Enter the size of array(odd) : ");
	scanf("%d",&size);

	int sz=size;

	if(size%2 != 0)
	{
		for(i=0;i<size;i++)
		{
			printf("\n Enter the value for %d element : ",i+1);
			scanf("%d",&a[i]);
		}
		fp=&a[0],lp=&a[size-1];

	//	printf("\n > fp = %d , lp = %d ",*fp,*lp);

		for(i=0;i<=size/2;i++)
		{
			printf("\n > I = %d ",i);
			if(*fp == *lp)
			{
				printf("\n > The middle element of the array  %d ",*fp);//*lp//a[i
				break;
			}
			else
			{
				fp++;
				lp--;
			}
		}
	}
	else
	{
		printf("\n > Invalid Size !!! ");
	}

	return 0;
}
