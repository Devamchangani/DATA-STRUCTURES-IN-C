/*
 * q9.c
 *
 *  Created on: 05-Aug-2022
 *      Author: root
 */



#include<stdio.h>
#include<stdlib.h>
#define n 2

struct bank
	{
		char uname[20];
		char acct_type[20];
		long acct_no;
		long cur_bal;
		int bal;
	}u[n],*sp=&u[0];

void input()
{
	for(int i=0;i<n;i++)
	{
		printf("\n Enter User Name : ");
		scanf("%s",(sp+i)->uname);
		printf("\n Enter Account Type : ");
		scanf("%s",(sp+i)->acct_type);
		printf("\n Enter Account Number : ");
		scanf("%ld",&(sp+i)->acct_no);
		printf("\n Enter Current Balance : ");
		scanf("%ld",&(sp+i)->cur_bal);
	}
}

void deposite()
{
	long temp,amt;
	int flag=0;

	printf("\n\n > Enter your account number : ");
	scanf("%ld",&temp);

	for(int i=0;i<n;i++)
	{
		if(temp==(sp+i)->acct_no)
		{
			printf("\n > Enter The Amount :");
			scanf("%ld",&amt);

			(sp+i)->cur_bal+=amt;

			printf("\n Amount has been updated .");
			return;

			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n > Invalid Account Number or Not Found !!!");
	}
	return;
}

void widhraw()
{
	long temp,amt;
	int flag=0;

	printf("\n\n > Enter your account number : ");
	scanf("%ld",&temp);

	for(int i=0;i<n;i++)
	{
		if(temp==(sp+i)->acct_no)
		{
			printf("\n > Enter The Amount :");
			scanf("%ld",&amt);
			if(amt>(sp+i)->cur_bal)
			{
				printf("\n !!! Not Enough Balance. ");
				flag=1;
				return;
			}
			else
			{
				(sp+i)->cur_bal-=amt;

				printf("\n Amount has been updated .");
				return;
			}

			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n > Invalid Account Number or Not Found !!!");
	}
	return;
}

void display()
{
	long temp;
	int flag=0;

	printf("\n\n > Enter your account number : ");
	scanf("%ld",&temp);

	for(int i=0;i<n;i++)
	{
		if(temp==(sp+i)->acct_no)
		{
			printf("\n > Account Number \t Name\t\t Type\t\tCurrent Balance ");

			printf("\n      %ld \t %s\t\t %s\t%ld",(sp+i)->acct_no,(sp+i)->uname,(sp+i)->acct_type,(sp+i)->cur_bal);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\n > Invalid Account Number or Not Found !!!");
	}
}

int main()
{
	int c;

	input();
	do{

		printf("\n\n\n\t\t ======== > MENU < ======== \n\n");
		printf("\n 1. Deposit ");
		printf("\n 2. Widhraw  ");
		printf("\n 3. Display the details ");
		printf("\n 4. Exit ");

		printf("\n\n > Enter your choice : ");
		scanf("%d",&c);

		switch(c)
		{
		case 1:
			deposite();
			break;

		case 2:
			widhraw();
			break;

		case 3:
			display();
			break;

		case 4:
			exit(0);
		}

	}while(c != 4);

	return 0;
}

