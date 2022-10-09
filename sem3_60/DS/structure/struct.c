/*
 * struct.c
 *
 *  Created on: 05-Jul-2022
 *      Author: root
 */

#include<stdio.h>
struct student
	{
		char name[10];
		int rollno;
		long int spid;
		char d[1];
	}s[10];

int main()
{

	int i;

	for(i=0;i<5;i++)
	{
		printf("\n > Enter Name : ");
		scanf("%s",s[i].name);
		printf("\n > Enter RollNo : ");
		scanf("%d",&s[i].rollno);
		printf("\n > Enter SPID : ");
		scanf("%ld",&s[i].spid);
		printf("\n > Enter Division : ");
		scanf("%s",s[i].d);
	}

	printf("\n > Name \t Roll No \t SPID \t\t Div ");

	for(i=0;i<5;i++)
	{
		printf("\n   %s \t %d \t\t %ld \t %s ",s[i].name,s[i].rollno,s[i].spid,s[i].d);
	}


	return 0;
}
