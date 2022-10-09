/*
 * deq.c
 *
 *  Created on: 27-Aug-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

int Q[10],r=-1,f=-1,size=0,val=0;

void insert()
{
	if(r==size-1)
	{
		printf("\n Queue will be over flow. ");
		return;
	}
	printf("\n > Enter the value which you want to enter : ");
	scanf("%d",&val);

	Q[++r]=val;

	if(r==0)
	{
		f=0;
	}

	return;
}

void delete()
{
	int ch;

	if(r==-1)
	{
		printf("\n Queue will be under flow. ");
		return;
	}

	printf("\n 1: Delete Left");
	printf("\n 2: Delete Right");
	printf("\n > Enter your choice : ");
	scanf("%d",&ch);

	if(ch==1)
	{
		printf("\n %d has been deleted. ",Q[f]);
		if(f==r)
		{
			printf("\n Queue has been reset. ");
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
	}
	else if(ch==2)
	{
		printf("\n %d has been deleted. ",Q[r]);
		if(f==r)
		{
			printf("\n Queue has been reset. ");
			f=-1;
			r=-1;
		}
		else
		{
			r--;
		}
	}
	else
	{
		printf("\n Invalid choice.");
	}
}

void display()
{
	printf("\n > Your Queue is :");

	for(int i=f;i<=r;i++)
	{
		printf(" %d",Q[i]);
	}
}

int main()
{
	int chh;

	printf("\n > Enter the size of queue : ");
	scanf("%d",&size);

		do
		{
			printf("\n 1: Insert ");
			printf("\n 2: Delele ");
			printf("\n 3: Display ");
			printf("\n 4: Exit ");

			printf("\n > Enter your choice : ");
			scanf("%d",&chh);

			switch(chh)
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


		}while(chh!=4);
		return 0;

	return 0;
}
