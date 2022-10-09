/*
 * iftopf.c
 *
 *  Created on: 29-Jul-2022
 *      Author: root
 */

#include<stdio.h>
#include<string.h>

#define n 30

char stack[n];
int top=-1;

void push(char ch)
{
	if(top==n-1)
	{
		printf("\n > Stack will be over flow !!! ");
		return;
	}
	stack[++top]=ch;
}

char pop()
{
	if(top==-1)
	{
		printf("\n > Stack will be under flow !!! ");
		return 0;
	}
	return stack[top--];
}

int main()
{
	char infix[30],postfix[30],ch;
	int i=0,j=0,len;

	 stack[++top]='(';
	printf("\n > Enter your Infix Expression : ");
	scanf("%s",infix);

	len=strlen(infix);

	infix[len]=')';

	printf("\n > infix : %s ",infix);

	while(infix[i]!='\0')
	{
		ch=infix[i];

		switch(ch)
		{
		case '+':
			while(stack[top]=='+' || stack[top]=='-' || stack[top]=='*' || stack[top]=='/')
			{
				postfix[j++]=pop();
			}
			push(infix[i]);
			break;

		case '-':
			while(stack[top]=='+' || stack[top]=='-' || stack[top]=='*' || stack[top]=='/')
			{
				postfix[j++]=pop();
			}
			push(infix[i]);
			break;

		case '*':
			while(stack[top]=='*' || stack[top]=='/')
			{
				postfix[j++]=pop();
			}
			push(infix[i]);
			break;

		case '/':
			while(stack[top]=='*' || stack[top]=='/')
			{
				postfix[j++]=pop();
			}
			push(infix[i]);
			break;

		case '(':
			push(infix[i]);

			break;

		case ')':
			while(stack[top]!='(')
			{
				postfix[j++]=pop();
			}

			pop();
			/*
			if(stack[top]=='(')
			{

				//printf("\n > poped '(' %c ",pop());
			}
			*/
			break;

		default:
			postfix[j++]=infix[i];
			break;
		}
		i++;
	}

	postfix[j]='\0';

	printf("\n > Your Postfix Expression is : %s ",postfix);

	return 0;
}
