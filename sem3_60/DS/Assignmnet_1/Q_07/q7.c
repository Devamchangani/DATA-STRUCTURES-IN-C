/*
 * q7.c
 *
 *  Created on: 01-Aug-2022
 *      Author: root
 */


#include<stdio.h>
#define n 2

struct student
	{
		char name[20];
		int rollno;
		struct marks
		{
			int m1,m2,m3;
		}m;
		int total;
		float per;
	}s[n];

int main()
{

	int i;

	for(i=0;i<n;i++)
	{
		printf("\n > Enter Name : ");
		scanf("%s",s[i].name);
		printf("\n > Enter RollNo : ");
		scanf("%d",&s[i].rollno);
		printf("\n > Enter the marks of 3 sub : ");
		scanf("%d %d %d",&s[i].m.m1,&s[i].m.m2,&s[i].m.m3);

		s[i].total=(s[i].m.m1+s[i].m.m1+s[i].m.m1)/3;

		s[i].per=(s[i].total*100)/30;
	}

	printf("\n > Name\t\tRoll No \t\t Marks \t\tTotal \t Percentage ");
	printf("\n\n \t\t\t\t Sub1 \t Sub2 \t Sub3 \n");

	for(i=0;i<n;i++)
	{
		printf("\n   %s \t\t %d\t\t %d\t%d\t%d \t%d \t%f",s[i].name,s[i].rollno,s[i].m.m1,s[i].m.m2,s[i].m.m3,s[i].total,s[i].per);
	}


	return 0;
}
