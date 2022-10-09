/*
 * op2.c
 *
 *  Created on: 12-Jul-2022
 *      Author: root
 */


/////////////////////////////////////// baki che


#include<stdio.h>
#define size1 3
#define size2 3

int main()
{
	int arr[size1][size2],size,temp;
	int i,j,k=0,num,c;
	size=size1*size2;
	int arrr[size];

	int ro,co;

	//========================================= * Input * =========================================//

	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("\n > Enter the value for %d%d element : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	//========================================= * Display * =========================================//


	printf("\n > Your 2-D array : \n\n\t");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf(" %d ",arr[i][j]);
			arrr[k]=arr[i][j];	//convert : 2D->1D
			k++;
		}
		printf("\n\t");
	}

	//========================================= * Converting 2-D to 1-D * =========================================//

	//====================================== * Sorting in Ascending Order * =======================================//

	/*
	printf("\n\n > After converting 2-D array to 1-D array : ");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arrr[i]);
	}
	*/

	//------ sorting 1-D arry ------//

	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(arrr[i]>arrr[j])
			{
				temp=arrr[i];
				arrr[i]=arrr[j];
				arrr[j]=temp;
			}
		}
	}

	/*
	printf("\n\n\n > After sorting 1-D array : ");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arrr[i]);
	}
	*/

	//------ Converting 1-D to 2-D ------//

	for(i=0,k=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			arr[i][j]=arrr[k];
			k++;
		}
	}

	printf("\n > Your 2-D array after sorting in ascending order : \n\n\t");

	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n\t");
	}



	//=================================== * Sorting in Descending Order * ===================================//

	//------ sorting 1-D arry ------//

	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(arrr[i]<arrr[j])
			{
				temp=arrr[i];
				arrr[i]=arrr[j];
				arrr[j]=temp;
			}
		}
	}

	//------ Converting 1-D to 2-D ------//

	for(i=0,k=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			arr[i][j]=arrr[k];
			k++;
		}
	}

	printf("\n > Your 2-D array after sorting in descending order : \n\n\t");

	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf(" %d ",arr[i][j]);
		}
		printf("\n\t");
	}

	//=================================== * Searching elements * ===================================//

	printf("\n > Enter the number you want to search : ");
	scanf("%d",&num);

	printf("\n > Your search result : ");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(arr[i][j]==num)
			{
				printf(" %d ",arr[i][j]);
			}
		}
	}

	//=================================== * Insertion * ===================================//


	printf(" 1. Insert Row.");
	printf("\n 2. Insert Column.");
	printf("\n 3. Insert row and column both.");
	printf("\n\n > Enter you want to insert : \n\n");
	scanf("%d",&c);

	switch(c)
	{
	case 1:
		printf("\n > Enter the row witch you want to enter");
		scanf("%d",&ro);

		if(ro<0 || ro>size1)
		{
			printf("\n > Out of Range !!! ");
		}
		else
		{
			for(i=size1,j=0;i>ro;i--)
			{
			}
		}
		break;
	case 2:
		printf("\n > Enter the column witch you want to enter");
		scanf("%d",&co);

		if(co<0 || co>size2)
		{
			printf("\n > Out of Range !!! ");
		}
		else
		{

		}
		break;
	case 3:
		printf("\n > Enter the row and column no you want to enter :");
		scanf("%d %d",&ro,&co);

		if(ro<0 || ro>size1 || co<0 || co>size2)
		{
			printf("\n > Out of Range !!! ");
		}
		else
		{

		}
		break;
	default:
		printf("\n > Invalid Choice");
		break;
	}





	return 0;
}
