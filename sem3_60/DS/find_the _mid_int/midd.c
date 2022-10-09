/*
 * midd.c
 *
 *  Created on: 07-Jul-2022
 *      Author: root
 */

// =========================== * using do while loop * ======================================//

/*
#include<stdio.h>

int main()
{
	int *fp;
	int *lp;
	int a[5]={5,10,15,20,25};
	fp=&a[0],lp=&a[4];

	do
	{
		fp++;
		lp--;
	}while( *fp!=*lp);

	printf("\n > %d = %d ",*fp,*lp);

	return 0;
}

*/
// =========================== * using while loop * ======================================//

#include<stdio.h>

int main()
{
	int *fp;
	int *lp;
	int a[5]={5,10,15,20,25};
	fp=&a[0],lp=&a[4];

	while( *fp != *lp);
	{
		fp++;
		lp--;
	}

	printf("\n > %d = %d ",*fp,*lp);

	return 0;
}

// =========================== * using for loop * ======================================//

/*
#include<stdio.h>

int main()
{
	int *fp;
	int *lp;
	int i,a[5]={5,10,15,20,25};
	fp=&a[0],lp=&a[4];

	for(i=0;i<5;i++)
	{
		if(*fp == *lp)
		{
			printf("\n > %d = %d ",*fp,*lp);
			break;
		}
	}

	return 0;
}
*/














