/*
 * q8.c
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
	}s[n],*sp=&s[0];

int main()
{

	int i;

	for(i=0;i<n;i++)
	{
		printf("\n > Enter Name : ");
		scanf("%s",(sp+i)->name);
		printf("\n > Enter RollNo : ");
		scanf("%d",&(sp+i)->rollno);
		printf("\n > Enter the marks of 3 sub : ");
		scanf("%d %d %d",&(sp+i)->m.m1,&(sp+i)->m.m2,&(sp+i)->m.m3);

		(sp+i)->total=((sp+i)->m.m1+(sp+i)->m.m1+(sp+i)->m.m1)/3;

		(sp+i)->per=((sp+i)->total*100)/30;
	}

	printf("\n > Name\t\tRoll No \t\t Marks \t\tTotal \t Percentage ");
	printf("\n\n \t\t\t\t Sub1 \t Sub2 \t Sub3 \n");

	for(i=0;i<n;i++)
	{
		printf("\n   %s \t\t %d\t\t %d\t%d\t%d \t%d \t%f",(sp+i)->name,(sp+i)->rollno,(sp+i)->m.m1,(sp+i)->m.m2,(sp+i)->m.m3,(sp+i)->total,(sp+i)->per);
	}


	return 0;
}
