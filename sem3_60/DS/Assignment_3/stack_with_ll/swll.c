/*
 * swll.c
 *
 *  Created on: 24-Sep-2022
 *      Author: root
 */

#include<stdlib.h>
#include<stdio.h>

struct stack
{
	int num;
	struct stack *next;
}*temp,*first,*last,*nn;

int top=0,size=0;

void push()
{
	if(top>=size)
	{
		printf("\n > Stack will be overflow !!!");
		return;
	}
	else
	{
		nn = (struct stack *) malloc (sizeof(struct stack));

		printf("\n > Enter the value : ");
		scanf("%d",&nn->num);
		nn->next=NULL;

		if(first==NULL)
		{
			first=last=nn;
		}
		else
		{
			last->next=nn;
			last=nn;
		}

		top++;
	}
	return;
}

void pop()
{
	if(top==0)
	{
		printf("\n > Stack will be underflow !!!");
		return;
	}

	if(first==last)
	{
		printf("\n > Deleted element : %d ",first->num);
		free(first);
		first=last=NULL;
		top=0;
	}
	else
	{
		temp=first;

		while(temp->next!=last)
		{
			temp=temp->next;
		}

		printf("\n > Deleted element : %d ",last->num);

		free(last);
		last=temp;
		last->next=NULL;
		top--;
	}

	return;
}

void display()
{
	if(first==NULL)
	{
		printf("\n > Stack is empty !!!.");
		return;
	}
	temp=first;

	while(temp!=NULL)
	{
		printf("\n > Element of node : %d ",temp->num);
		temp=temp->next;
	}

}


int main()
{
	printf("\n > Enter the size of stack : ");
	scanf("%d",&size);

	int chh=0;

	do
	{
		printf("\n\n > 1. Push ");
		printf("\n > 2. Pop ");
		printf("\n > 3. Display ");
		printf("\n > 4. Exit");

		printf("\n > Enter your choice : ");
		scanf("%d",&chh);

		switch(chh)
		{
		case 1:
			push();
			break;

		case 2:
			pop();
			break;

		case 3:
			display();
			break;

		case 4:
			exit(0);
			break;

		default:
			printf("\n > Invalid choice !!! ");
		}

	}while(chh!='4');
	return 0;
}