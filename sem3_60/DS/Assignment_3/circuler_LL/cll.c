/*
 * cll.c
 *
 *  Created on: 24-Sep-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*first,*last,*nn,*temp,*curr,*prev,*tt;

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
		nn->next=NULL;

		if(first==NULL)
		{
			first=nn;
			last=nn;
		}
		else
		{
			last->next=nn;
			last=nn;
			last->next=first;

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

	last->next=nn;
	nn->next=first;
	first=nn;
}

void insert_atlast()
{
	printf("\n > Enter value for element of node : ");
	scanf("%d",&x);

	nn = (struct node *) malloc (sizeof(nn));
	nn->data=x;

	last->next=nn;
	last=nn;
	last->next=first;
}

void insert_atmiddle()
{
	int pos,count=1;
	printf("\n > Enter the position : ");
	scanf("%d",&pos);

	if(pos==1)
	{
		insert_atfirst();
	}
	else
	{
		prev=NULL;
		curr=first;

		while(count<pos)
		{
			prev=curr;
			curr=curr->next;
			count++;
		}

		printf("\n > Enter value for element of node : ");
		scanf("%d",&x);

		nn = (struct node *) malloc (sizeof(nn));
		nn->data=x;

		prev->next=nn;
		nn->next=curr;
	}

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

		first=first->next;
		last->next=first;
		free(temp);
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
		temp=first;

		while(temp->next!=last)
		{
			temp=temp->next;
		}
		printf("\n > Deleted element of node is : %d ",last->data);

		temp->next=first;
		free(last);
		last=temp;
	}
}
void display()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{

		temp=first;

		//first to last

		do
		{
			printf("\nElement of node : %d ",temp->data);
			temp=temp->next;
		}while(temp!=first);

		/*
		temp=last;

		//last to last second

		do
		{
			printf("\nElement of node : %d ",temp->data);
			temp=temp->next;
		}while(temp!=last);

		*/
	}
}

void search()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		int src,pos=1,flag=0;
		printf("\n > Enter the value for search : ");
		scanf("%d",&src);

		temp=first;

		temp=first;
		do
		{
			if(temp->data==src)
			{
				printf("\n >element %d found at position : %d ",temp->data,pos);		}
			temp=temp->next;
			pos++;
			flag=1;
		}while(temp!=first);
		if(flag==0)
		{
			printf("\n > Element not found !!! ");
		}
	}
}

void sort()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		int t;
		temp=first;
		do
		{
			tt=temp;
			do
			{
				if(temp->data > tt->data)
				{
					t=temp->data;
					temp->data=tt->data;
					tt->data=t;
				}
				tt=tt->next;
			}while(tt!=first);

			temp=temp->next;
		}while(temp!=first);
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

		if(pos==1)
		{
			delete_atfirst();
		}
		else
		{
			prev=NULL;
			curr=first;
			while(count<pos)
			{
				prev=curr;
				curr=curr->next;
				count++;
			}
			printf("\n > Deleted element of node is : %d ",curr->data);

			prev->next=curr->next;

			if(prev->next == first)
			{
				last=prev;
			}

			free(curr);
		}
	}
}

int main()
{
	create();
	int chh;
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
			display();
			break;

		case 8:
			search();
			break;

		case 9:
			sort();
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
