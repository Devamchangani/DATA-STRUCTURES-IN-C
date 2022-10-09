/*
 * intopf.c
 *
 *  Created on: 28-Jul-2022
 *      Author: root
 */

#include<stdio.h>
#include<string.h>

#define n 30


int top=-1;
char stack[30];

char pop()	//definition of pop
{
	if(top==-1)	//checking under flow
	{
		printf("\n > Stack will be under flow !!! ");
		return 0;
	}
	else
	{
		return stack[top--];
	}
}

void push(char ch)
{
	if(top == n-1)	//checking for over flow
	{
		printf("\n > Stack will be over flow !!! ");
		return;
	}
	else
	{
		stack[++top] = ch;
	}
		//printf("\n > top = %d  ",top);
}

int main()
{
	char infix[30],postfix[30],ch;
	int i=0,j=0;

	printf("\n > Enter the infix string : ");
	scanf("%s",infix);

	while(infix[i] != '\0')
	{
		ch = infix[i];

		switch(ch)
		{
		case '+':
			while(stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')
			{
				postfix[j++]=pop();
			}

			push(ch);
		break;
		case '-':
			while(stack[top] == '+' || stack[top] == '-' || stack[top] == '*' || stack[top] == '/')
			{
				postfix[j++]=pop();
			}
			push(ch);
		break;
		case '*':
			while(stack[top] == '*' || stack[top] == '/')
			{
				postfix[j++]=pop();
			}
			push(ch);
		break;
		case '/':
			while(stack[top] == '*' || stack[top] == '/')
			{
				postfix[j++]=pop();
			}
			push(ch);
		break;
		default:
			postfix[j++]=infix[i];
		}
		i++;
	}
	//printf("\n > stack : %s ",stack);

	while(top!=-1)
	{
		postfix[j++]=pop();
	}
	postfix[j]='\0';

	printf("\n > Your post fix : %s ",postfix);

	return 0;
}

