/*
 * pq.c
 *
 *  Created on: 27-Aug-2022
 *      Author: root
 */


#include<stdio.h>
#include<stdlib.h>

int QA[10],QB[10],val=0;
int r1=-1,f1=-1,f2=-1,r2=-1;
int size1,size2;

void insert()
{
	int chh=0;

	printf("\n 1 : Higher Priority Queue");
	printf("\n 2 : lower Priority Queue");
	printf("\n > Enter your choice : ");
	scanf("%d",&chh);

	if(chh==1)
	{
		if(r1==size1-1)
		{
			printf("\n Queue will be over flow. ");
			return;
		}
		else
		{
			printf("\n > Enter the value : ");
			scanf("%d",&val);

			QA[++r1]=val;

			if(r1==0)
			{
				f1=0;
			}
		}
	}
	else if(chh==2)
	{
		if(r2==size2-1)
		{
			printf("\n Queue will be over flow. ");
			return;
		}
		else
		{
			printf("\n > Enter the value : ");
			scanf("%d",&val);

			QB[++r2]=val;

			if(r2==0)
			{
				f2=0;
			}
		}
	}
	else
	{
		printf("\n > Invalid choice.");
		return;
	}
}

void delete()
{
	if(f1==-1 && f2==-1)
	{
		printf("\n > Queue will be under flow.");
		return;
	}

	if(f1!=-1)
	{
		printf(" %d has been deleted.",QA[f1]);
		if(f1==r1)
		{
			f1=r1=-1;
		}
		else
		{
			f1++;
		}
	}
	else
	{
		printf(" %d has been deleted.",QB[f2]);
		if(f2==r2)
		{
			f2=r2=-1;
		}
		else
		{
			f2++;
		}
	}

	return;
}

void display()
{
	printf("Your Queue is : ");

	if(r1==-1 && r2==-1)
	{
		printf("\n Your queue is empty.");
	}
	else if(f1!=-1)
	{
		for(int i=f1;i<=r1;i++)
		{
			printf(" %d",QA[i]);
		}
	}
	else
	{
		for(int j=f2;j<=r2;j++)
		{
			printf(" %d",QB[j]);
		}
	}

	return;
}

int main()
{
	int ch;

	printf("\n > Enter the size of \n \thigher priority queue : ");
	scanf("%d",&size1);
	printf(" \tlower priority queue : ");
	scanf("%d",&size2);

	do
	{
		printf("\n 1: Insert ");
		printf("\n 2: Delele ");
		printf("\n 3: Display ");
		printf("\n 4: Exit ");

		printf("\n > Enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{

		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("\n > Invalid option !!! ");
			break;
		}

	}while(ch!=4);


	return 0;
}
