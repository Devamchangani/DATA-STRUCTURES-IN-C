/*
 * stack.c
 *
 *  Created on: 15-Jul-2022
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>

#define N 4

int stack[N],top=-1,value;

void pushop();	//declaration of push
void popop();	//declaration of pop
void peepop();	//declaration of peep
void display();	//declaration of display

void pushop()	//definition of push
{
	if(top==(N-1))	//checking for over flow
	{
		printf("\n > Stack will be over flow !!! ");
	}
	else
	{
		printf("\n > Enter the value you want to push : ");	//taking the value for push
		scanf("%d",&value);
		top=top+1;	//increasing top

		stack[top]=value;	//pushing the value
	}
}

void popop()	//definition of pop
{
	if(top==-1)	//checking under flow
	{
		printf("\n > Stack will be under flow !!! ");
	}
	else
	{
		printf("\n > The value witch poped is : %d ",stack[top]);
		top=top-1;	//decreasing top
	}
}

void display()	//definition of display
{
	int i;

	printf("\n > Your stack is : ");

	for(i=0;i<=top;i++)
	{
		printf(" %d ",stack[i]);
	}
}

void peepop()	//definition of peep
{
	int i;

	if(top==-1)
	{
		printf("\n > Stack is empty !!! ");
		return;
	}
	else
	{
		printf("\n > Enter value for I : ");
		scanf("%d",&i);

		if((top+1)<i)
		{
			printf("\n > The peep operation can not be completed !!! ");
		}
		else
		{
			printf(" %d ",stack[top-i+1]);
		}
	}
	return;
}

int main()
{
	int ch;
	do
	{

		// Create Menu

		printf("\n\n\n ================= * MENU * ================= \n\n");
		printf("\n > 1. Push Operation ");
		printf("\n > 2. Pop Operation ");
		printf("\n > 3. Peep Operation ");
		printf("\n > 4. Display ");
		printf("\n > 5. Exit ");

		printf("\n\n > Enter your choice : ");	//input choice
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			pushop();	//calling pushop function
			break;
		case 2:
			popop();	//calling popop function
			break;
		case 3:
			peepop();	//calling peepop function
			break;
		case 4:
			if(top==-1)	// for checking stack is empty or not
			{
				printf("\n > Stack is empty !!! ");
			}
			else
			{
				display();	//calling display function
			}
			break;
		case 5:
			exit(0);
		}

	}while(ch!=5);
}
