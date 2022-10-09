/*
 * sll.c
 *
 *  Created on: 20-Sep-2022
 *      Author: root
 */

/*
 * ll.c
 *
 *  Created on: 03-Sep-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int rno;
	char name[20];
	int marks;
	char div[2];
	struct node *next;
}*first,*last,*nn,*temp,*curr,*prev,*mx;

int x,ch;

void create()
{
	x=0;
	do
	{
		nn = (struct node *) malloc (sizeof(struct node));

		if(nn==NULL)
		{
			printf("\n > node not created !!! ");
		}
		else
		{
			printf("\n > Enter Roll No :");
			scanf("%d",&nn->rno);
			printf("\n > Enter name : ");
			scanf("%s",nn->name);
			printf("\n > Enter Division : ");
			scanf("%s",nn->div);
			printf("\n > Enter Marks : ");
			scanf("%d",&nn->marks);
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

		printf("\n > continue(y=1/n=-1) : ");
		scanf("%d",&x);
		}
	}while(x != -1);
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
		while(temp!=NULL)
		{
			printf("\n\n >Student Roll No : %d ",temp->rno);
			printf("\n   Student Name : %s ",temp->name);
			printf("\n   Student Div : %s ",temp->div);
			printf("\n   Student Marks : %d \n",temp->marks);

			temp=temp->next;
		}
	}
}

void searchformax()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
		return;
	}
	else
	{
		int max=0;

		temp=first;
		while(temp!=NULL)
		{
			if(max<temp->marks)
			{
				max=temp->marks;
				mx=temp;
			}
			temp=temp->next;
		}

		printf("\n\n > Highest Marks : ");

		printf("\n\n > Student Roll No : %d ",mx->rno);
		printf("\n   Student Name : %s ",mx->name);
		printf("\n   Student Div : %s ",mx->div);
		printf("\n   Student Marks : %d \n",mx->marks);

		return;
	}
}

void delete_byrno()
{
	if(first==NULL)
	{
		printf("\n > Link list is empty.");
	}
	else
	{
		printf("\n > Enter the Roll no for delete : ");
		scanf("%d",&x);

		prev=NULL;
		curr=first;

		if(curr->rno==x)
		{
			temp=first;
			printf("\n > Deleted Roll No is : %d ",curr->rno);
			first=temp->next;
			free(temp);
		}
		else
		{
			while(x != curr->rno)
			{
				prev=curr;
				curr=curr->next;
			}

			printf("\n > Deleted Roll No is : %d ",curr->rno);

			prev->next=curr->next;

			if(prev->next == NULL)
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
		printf("\n 1: Display : ");
		printf("\n 2: Delete by roll no : ");
		printf("\n 3: search for max : ");
		printf("\n 4: Exit");

		printf("\n > Enter your choice : ");
		scanf("%d",&chh);

		switch(chh)
		{
		case 1:
			display();
			break;

		case 2:
			delete_byrno();
			break;

		case 3:
			searchformax();
			break;

		case 4:
			exit(0);
			break;

		default:
			printf("\n > Invalid option !!! ");
			break;
		}
	}while(chh != 10);
	return 0;
}

