/*
 * dll.c
 *
 *  Created on: 24-Sep-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
}*first,*last,*nn,*temp,*curr,*prev;

int x,ch;

void create()
{
	x=0;
	printf("\n > Enter value for element of node (-1 for end) : ");
	scanf("%d",&x);
	while(x!= -1)
	{
		nn = (struct node *) malloc (sizeof(nn));
		nn->data=x;
		nn->left=NULL;
		nn->right=NULL;

		if(first==NULL)
		{
			first=nn;
			last=nn;
		}
		else
		{
			last->right=nn;
			nn->left=last;
			last=nn;
		}

		printf("\n > Enter value for element of node (-1 for end) : ");
		scanf("%d",&x);
	}
}

void insert_atfirst()
{
	printf("\n > Enter value for element of node : ");
	scanf("%d",&x);

	nn = (struct node *) malloc (sizeof(nn));
	nn->data=x;

	nn->right=first;
	nn->left=NULL;
	first->left=nn;
	first=nn;
}

void insert_atlast()
{
	printf("\n > Enter value for element of node : ");
	scanf("%d",&x);

	nn = (struct node *) malloc (sizeof(nn));
	nn->data=x;

	nn->left=last;
	nn->right=NULL;
	last->right=nn;
	last=nn;
}

void insert_atmiddle()
{
	int pos,count=1;
	printf("\n > Enter the position : ");
	scanf("%d",&pos);

	prev=NULL;
	curr=first;
	while(count<pos)
	{
		prev=curr;
		curr=curr->right;
		count++;
	}

	printf("\n > Enter value for element of node : ");
	scanf("%d",&x);

	nn = (struct node *) malloc (sizeof(nn));
	nn->data=x;

	prev->right=nn;
	nn->right=curr;
	nn->left=prev;
	curr->left=nn;
}

void delete_atfirst()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		printf("\n > Deleted element of node is : %d ",first->data);
		temp=first;

		first=first->right;
		free(first->left);
		first->left=NULL;
	}
}

void delete_atlast()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		printf("\n > Deleted element of node is : %d ",last->data);
		temp=first;

		last=last->left;
		free(last->right);
		last->right=NULL;
	}
}

void display_ltr()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		temp=first;
		while(temp!=NULL)
		{
			printf("\nElement of node : %d ",temp->data);
			temp=temp->right;
		}
	}
}

void display_rtl()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		temp=last;
		while(temp!=NULL)
		{
			printf("\nElement of node : %d ",temp->data);
			temp=temp->left;
		}
	}
}

void delete_atmiddle()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
	}
	else
	{
		int pos,count=1;
		printf("\n > Enter the position : ");
		scanf("%d",&pos);

		prev=NULL;
		curr=first;
		while(count<pos)
		{
			prev=curr;
			curr=curr->right;
			count++;
		}
		printf("\n > Deleted element of node is : %d ",curr->data);

		prev->right=curr->right;
		curr->right->left=prev;

		if(prev->right == NULL)
		{
			last=prev;
		}

		free(curr);
	}
}

int main()
{
	create();
	int chh,t;
	do
	{
		printf("\n 1: Insert At First : ");
		printf("\n 2: Insert At Middle");
		printf("\n 3: Insert At Last : ");
		printf("\n 4: Delete At First : ");
		printf("\n 5: Delete At Middle");
		printf("\n 6: Delete At Last : ");
		printf("\n 7: Display");
		printf("\n 8: Search");
		printf("\n 9: Sort");
		printf("\n 10: Exit");

		printf("\n > Enter your choice : ");
		scanf("%d",&chh);

		switch(chh)
		{
		case 1:
			insert_atfirst();
			break;

		case 2:
			insert_atmiddle();
			break;

		case 3:
			insert_atlast();
			break;

		case 4:
			delete_atfirst();
			break;

		case 5:
			delete_atmiddle();
			break;

		case 6:
			delete_atlast();
			break;

		case 7:
			printf("\n >1. Left to right \n >2. Right to left \n\n > Enter your choice : ");
			scanf("%d",&t);

			if(t==1)
				display_ltr();
			else if(t==2)
				display_rtl();
			else
				display_ltr();

			break;

		case 8:
		//	search();
			break;

		case 9:
		//	sort();
			printf("\n > Link list has been sorted. ");
			break;

		case 10:
			exit(0);
			break;

		default:
			printf("\n > Invalid option !!! ");
			break;
		}
	}while(chh != 10);
	return 0;
}
