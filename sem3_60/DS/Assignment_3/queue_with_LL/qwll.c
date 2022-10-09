/*
 * qwll.c
 *
 *  Created on: 24-Sep-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*front,*rear,*nn,*temp,*curr,*prev,*tt;

int size=0,r=-1,f=-1;

void enqueue()
{
	if(r>=size-1)
	{
		printf("\n > Queue will be overflow !!! ");
		return;
	}
	else
	{
		nn = (struct node *) malloc (sizeof(nn));
		printf("\n > Enter the value : ");
		scanf("%d",&nn->data);
		nn->next=NULL;

		if(front==NULL)
		{
			front=nn;
			rear=nn;
			f=0;
		}
		else
		{
			rear->next=nn;
			rear=nn;
		}
		r++;
	}
}

void dequeue()
{
	if(r==-1)
	{
		printf("\n > Link list will be underflow.");
		return;
	}
	else
	{
		printf("\n f = %d , r = %d",f,r);
		if(f==r)
		{
			printf("\n > Deleted element of node is : %d ",front->data);
			printf("\n >Queue has been reset.");

			free(front);
			front=rear=NULL;
			r=-1;
			f=-1;
			return;
		}
		else
		{
			temp=front;

			printf("\n > Deleted element of node is : %d ",front->data);
			front=front->next;
			f++;
			free(temp);
		}
	}
}

void display()
{
	if(rear==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			printf("\nElement of node : %d ",temp->data);
			temp=temp->next;
		}
	}
}

int main()
{
	int chh;

	printf("\n > Enter the size of queue : ");
	scanf("%d",&size);

	do
	{
		printf("\n 1: Enqueue : ");
		printf("\n 2: Dequeue");
		printf("\n 3: Display : ");
		printf("\n 4: Exit : ");

		printf("\n > Enter your choice : ");
		scanf("%d",&chh);

		switch(chh)
		{
		case 1:
			enqueue();
			break;

		case 2:
			dequeue();
			break;

		case 3:
			display();
			break;

		case 4:
			exit(0);
			break;

		default:
			printf("\n > Invalid option !!! ");
			break;
		}
	}while(chh != 4);
	return 0;
}
