/*
 * stp.c
 *
 *  Created on: 07-Jul-2022
 *      Author: root
 */

//============================== structure using pointer =======================================//

#include<stdio.h>

int main()
{

	struct employee
	{
		char fname[10];
		char lname[10];
		long int m_no;
		char email[15];
		long int salary;
	}e[10],*sp;
	sp=&e[0];


	int i;

	for(i=0;i<5;i++)
	{
		printf("\n > Enter First Name : ");
		scanf("%s",(sp+i)->fname);
		printf("\n > Enter Last Name : ");
		scanf("%s",(sp+i)->lname);
		printf("\n > Enter Mobile No. : ");
		scanf("%ld",&(sp+i)->m_no);
		printf("\n > Enter Email : ");
		scanf("%s",(sp+i)->email);
		printf("\n > Enter Salary : ");
		scanf("%ld",&(sp+i)->salary);
	}

	printf("\n > First Name \t Last Name \t Mobile No. \t Email \t\t Salary ");

	for(i=0;i<5;i++)
	{
		printf("\n   %s \t %s \t %ld \t %s \t %ld",(sp+i)->fname,(sp+i)->lname,(sp+i)->m_no,(sp+i)->email,(sp+i)->salary);
	}


	return 0;
}
