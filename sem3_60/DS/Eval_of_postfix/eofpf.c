/*
 * eofpf.c
 *
 *  Created on: 01-Aug-2022
 *      Author: root
 */

#include<stdio.h>

#define n 30

int stack[n];
int top=-1;

void push(int t)
{
	if(top==n-1)
	{
		printf("\n > Stack will be over flow !!! ");
		return;
	}
	stack[++top]=t;
}

int pop()
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
	char postfix[n],ch;

	int temp=0;

	int i=0;
	int num1=0,num2=0,ans=0;

	printf("\n > Enter your string : ");
	scanf("%s",postfix);

	while(postfix[i] != '\0')
	{
		ch=postfix[i];

		switch(ch){

		case '+':
			num2=pop();
			num1=pop();

			ans=num1+num2;

			push(ans);
			break;

		case '-':
			num2=pop();
			num1=pop();

			ans=num1-num2;

			push(ans);
			break;

		case '*':
			num2=pop();
			num1=pop();

			ans=num1*num2;

			push(ans);
			break;

		default:

			printf("\n\n > Enter the value for %c : ",postfix[i]);
			scanf("%d",&temp);
			push(temp);
			break;
		}
		i++;

	}

	printf("\n > Your Answer Is : %d ",pop());

}
