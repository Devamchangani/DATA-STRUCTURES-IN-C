/*
 * q6.c
 *
 *  Created on: 22-Sep-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mix{
	int it;
	char ch[20];
	struct mix* next;
}*first,*last,*nn,*temp;

struct intt{
	int it1;
	struct intt *next;
}*first1,*last1,*temp1,*nn1;

struct chh{
	char ch1[20];
	struct chh *next;
}*first2,*last2,*nn2,*temp2;

void create()
{
	int x;

	while(x!=-1)
	{
		nn = (struct mix*) malloc(sizeof(struct mix)) ;

		printf("\n > Enter integer value : ");
		scanf("%d",&nn->it);
		printf("\n > Enter character value : ");
		scanf("%s",nn->ch);
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

		printf("\n > Continue (y=0/n=-1) : ");
		scanf("%d",&x);
	}
}

void sort()
{
	temp=first;

	while(temp!=NULL)
	{
		// Separating for integer ll

		nn1=(struct intt *) malloc (sizeof(struct intt));
		nn1->it1=temp->it;
		nn1->next = NULL;

		if(first1==NULL)
		{
			first1=last1=nn1;
		}
		else
		{
			last1->next=nn1;
			last1=nn1;
		}

		// Separating for character ll

		nn2=(struct chh *) malloc (sizeof(struct chh));
		strcpy(nn2->ch1,temp->ch);
		nn2->next = NULL;

		if(first2==NULL)
		{
			first2=last2=nn2;
		}
		else
		{
			last2->next=nn2;
			last2=nn2;
		}

		temp=temp->next;
	}

	printf("\n > Your Link Linsk has been separated .");
}

void display_mix()
{
	temp=first;

	printf("\n > Display the details of mix ll : \n\n");
	while(temp!=NULL)
	{
		printf("\n Elements of node : %d\t%s",temp->it,temp->ch);
		temp=temp->next;
	}
}

void display_intt()
{
	temp1=first1;

	printf("\n > Display the details of integer ll : \n\n");
	while(temp1!=NULL)
	{
		printf("\n Elements of node : %d",temp1->it1);
		temp1=temp1->next;
	}
}

void display_chh()
{
	temp2=first2;

	printf("\n > Display the details of mix ll : \n\n");
	while(temp2!=NULL)
	{
		printf("\n Elements of node : %s",temp2->ch1);
		temp2=temp2->next;
	}
}

void sum()
{
	int sum=0;
	temp1=first1;
	while(temp1!=NULL)
	{
		sum=sum+temp1->it1;
		temp1=temp1->next;
	}
	printf("\n > Sum of integer link list : %d ",sum);
}

int main()
{
	create();
		int chh;
		do
		{
			printf("\n\n\n 1: Sort : ");
			printf("\n 2: Display mix Link list : ");
			printf("\n 3: Display integer Link list : ");
			printf("\n 4: Display character Link list : ");
			printf("\n 5: Sum : ");
			printf("\n 6: Exit : ");

			printf("\n > Enter your choice : ");
			scanf("%d",&chh);

			switch(chh)
			{
			case 1:
				sort();
				break;

			case 2:
				display_mix();
				break;

			case 3:
				display_intt();
				break;

			case 4:
				display_chh();
				break;

			case 5:
				sum();
				break;

			case 6:
				exit(0);
				break;

			default:
				printf("\n > Invalid option !!! ");
				break;
			}
		}while(chh != 6);
	return 0;
}