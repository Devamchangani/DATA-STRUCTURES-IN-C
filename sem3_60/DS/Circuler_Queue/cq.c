/*
 * cq.c
 *
 *  Created on: 23-Aug-2022
 *      Author: root
 */


/*
 * sq.c
 *
 *  Created on: 22-Aug-2022
 *      Author: root
 */


#include<stdio.h>
#include<stdlib.h>

int q[4],size=0,f=-1,r=-1,flag=0;

void insert()
{
	int val;
	//checking for over flow
	if((f==0 && r==size-1) || f-r==1)	//if((f==0 && r==size-1) || f==r+1)
	{
		printf("\n Alert !!! Queue will be overflow.");
		return;
	}
	else
	{
		printf("\n > Enter the value : ");
		scanf("%d",&val);

		if(r==size-1 && f!=0)	//is queue has space and rear pointer is on size-1
		{
			r=0;	//reset rear pointer
		}
		else
		{
			r=r+1;	//increment rear pointer
		}
		q[r]=val;	//insert the value

		if(flag==0)		//it will set f=0 only one time
		{
			if(r==0)
			{
				flag=1;
				f=0;
			}
		}

	}
	return;
}

void delete()
{
	if(f==-1)	//checking for under flow
	{
		printf("\n Queue will be under flow. ");
		return;
	}
	else
	{
		printf("\n > %d has been deleted.",q[f]);
		if(f==r)	//if front point == rear pointer
		{
			//printf("\n > f= %d , r= %d ",f,r);

			//reset the f and r
			r=-1;
			f=-1;

			printf("\n Queue has been reset !!! ");
			return;
		}
		else
		{
			if(f==size-1 && r<f)	//if queue has element and front pointer is on size-1
			{
				f=0;
			}
			else
			{
				f++;	//just increment front pointer
			}
		}

	}
}

void display()
{
	if(f==-1)		//checking for queue is empty or not
	{
		printf("\n Queue is empty. ");
		return;
	}

	printf("\n > Your queue is :");
	if(f<=r)		//if rear pointer is not reset
	{
		for(int i=f;i<=r;i++)
		{
			printf(" %d",q[i]);
		}
	}
	else			//if rear pointer is reset
	{
		for(int i=f;i<=size-1;i++)	//front to size-1
		{
			printf(" %d",q[i]);
		}
		for(int j=0;j<=r;j++)		//0 to rear
		{
			printf(" %d",q[j]);
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
		default:
			printf("\n > Invalid option !!! ");
			break;
		}

	}while(ch!=4);

	return 0;
}
