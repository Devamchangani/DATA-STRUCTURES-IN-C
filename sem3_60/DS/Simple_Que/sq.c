/*
 * sq.c
 *
 *  Created on: 22-Aug-2022
 *      Author: root
 */


#include<stdio.h>
#include<stdlib.h>

int q[10],size=0,f=-1,r=-1;

void insert()
{
	int val;
	//checking for over flow
	if(r==size-1)
	{
		printf("\n Alert !!! Queue will be overflow.");
		return;
	}
	else
	{
		printf("\n > Enter the value : ");
		scanf("%d",&val);
		q[++r]=val;
		if(r==0)
		{
			f=0;
		}
	}
	return;
}

void delete()
{
	if(f==-1)
	{
		printf("\n Queue will be under flow. ");
		return;
	}
	else
	{
		printf("\n > %d has been deleted.",q[f]);
		if(f==r)
		{
			//reset the f and r
			r=-1;
			f=-1;

			printf("\n Queue has been reset !!! ");
			return;
		}
		else
		{
			f++;
			return;
		}
	}
}

void display()
{
	if(f==-1)
	{
		printf("\n Queue is empty. ");
		return;
	}
	else
	{
		printf("\n > Your queue is :");
		for(int i=f;i<=r;i++)
		{
			printf(" %d",q[i]);
		}
	}
}

int main()
{
	int ch;

	printf("\n > Enter the size of queue : ");
	scanf("%d",&size);

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
		}


	}while(ch!=4);
	return 0;
}
