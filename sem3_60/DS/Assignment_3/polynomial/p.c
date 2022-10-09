/*
 * p.c
 *
 *  Created on: 24-Sep-2022
 *      Author: root
 */

#include<stdlib.h>
#include<stdio.h>

struct stack
{
	int exp,cof;
	struct stack *next;
}*temp,*first,*last,*nn;

int x=0;

void create()
{
	do
	{
		nn = (struct stack *) malloc (sizeof(struct stack));

		printf("\n > Enter the value co-efficient : ");
		scanf("%d",&nn->cof);

		printf("\n > Enter the value exponent : ");
		scanf("%d",&nn->exp);

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
		printf("\n > continue (y=0/n=-1) : ");
		scanf("%d",&x);
	}while(x!=-1);
	return;
}

void display()
{
	temp=first;

	while(temp!=NULL)
	{
		printf("%dx^%d + ",temp->cof,temp->exp);
		temp=temp->next;
	}
	printf("0");

}


int main()
{

	int chh=0;

	do
	{
		printf("\n\n > 1. create ");
		printf("\n > 2. Display ");
		printf("\n > 3. Exit");

		printf("\n > Enter your choice : ");
		scanf("%d",&chh);

		switch(chh)
		{
		case 1:
			create();
			break;

		case 2:
			display();
			break;

		case 3:
			exit(0);
			break;

		default:
			printf("\n > Invalid choice !!! ");
		}

	}while(chh!='3');
	return 0;
}
