/*
 * q16.c
 *
 *  Created on: 17-Aug-2022
 *      Author: root
 */

#include<stdio.h>
#define s 2
#define stud 2
#define sub 3

int main()
{
	int arr[7][150][7];
	int i=0,j=0,k=0;

	for(i=0;i<s;i++)
	{
		printf("\n\n\n > Enter the detail of %d semester student : ",i+1);
		for(j=0;j<stud;j++)
		{
			printf("\n\n Enter the detail of %d  student : ",j+1);
			for(k=0;k<sub;k++)
			{
				printf("\n Enter the marks of %d sub : ",k+1);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}


	printf("\n\n\n > Display the details of student :");

	printf("\n Sem \t\t Roll No \t\t Marks ");
	printf("\n \t\t\t\t Sub1 \t Sub2 \t Sub3 \n");

	for(i=0;i<s;i++)
	{
		printf("\n %d ",i+1);

		for(j=0;j<stud;j++)
		{
			printf("\t\t %d \t",j+1);

			for(k=0;k<sub;k++)
			{

				printf("\t %d ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}


