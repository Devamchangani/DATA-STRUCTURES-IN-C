/*
 * q3.cpp
 *
 *  Created on: 29-Aug-2022
 *      Author: root
 */


#include<iostream>
#include<string.h>

using namespace std;

class patient
{
protected :
	char name[15];
	int bd,bm,by,age,fd,fm,fy,cd,cm,cy;
	int d,m,y;		//check in date
	int d1,m1,y1;	//checkout date


public:
	int p_id;
	int days;

	patient(int p,char *n,int a,int b,int c,int dd,int e,int f,int g,int h,int i)
	{
		p_id=p;
		strcpy(name,n);
		bd=a;
		bm=b;
		by=c;

		d=dd;
		m=e;
		y=f;

		d1=g;
		m1=h;
		y1=i;

		days=d1-d;
		age=0;

		cd=23,cm=9,cy=2022;

		fd=fm=fy=0;
		void count_age()
			{
				int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//days in month

				if((cy%4==0 && cy%100!= 0) || cy%400==0)	//checking for leap year
				{
					month[1]=29;
				}

				if(bd>cd)		//for diff of date
				{
					d=d+month[m];
					m=m-1;
				}
				fm=cd-bd;

				if(bm>cm)	//for diff of month
				{
					cm=cm+1;
					cy=cy-1;
				}
				fm=cm-bm;
				fy=cy-by;		//for diff of year

				age=fy;
		//		cout<<"\n > Date Different is : \n\t\t\t"<<fd<<"days: \n\t\t\t"<<fm<<"months: \n\t\t\t"<<fy;
			}
		void display_patient()
			{
				printf("\n > Details Of Patient : \n\n");

				printf(" \t Name : %s \n",name);
				printf("\t Age : %d \n",age);
				printf(" \t Check-In Date : %d / %d / %d \n",d,m,y);
				printf(" \t Check-Out Date : %d / %d / %d \n",d1,m1,y1);
			}

			void count_days()
			{
				days = d=d1;
			}

	};

class ipd
{
public:
	int ward_no;
	int bed_no;
	float cpd;

	ipd(int x,int y,int z)
	{
		ward_no=x;
		bed_no=y;
		cpd=z;
	};

	void display_ipd()
	{
		printf("\n > Details Of IPD : \n\n");

		printf(" \t Ward No : %d \n",ward_no);
		printf(" \t Bed No : %d \n",bed_no);
		printf(" \t Charge Per Day : %f \n",cpd);
	}
};

class ipd_patient: public patient,public ipd
{
public:
	float amt;
	void get_amt()
	{
		amt = days * cpd;
	}

	void display_ipd_patient()
	{
		display_ipd();
		display_patient();
		printf("\n\n\n > The total amount to pay is : %f",amt);
	}
};


int main()
{
//	int i=0,size=0,pid=0;
//
//	printf("\n > Enter the no of patient you want to enter : ");
//	scanf("%d",&size);

	int p_id;
	int bd,bm,by;
	int d,m,y;
	int d1,m1,y1;
	char *name = new (char);

	int ward_no,bed_no;
	float cpd;

	printf("\n > Enter the details of patient : ");

	printf("\n \tEnter patient ID : ");
	scanf("%d",&p_id);

	printf("\n \tEnter name : ");
	scanf("%s",name);

	printf("\n \tEnter birthdate : ");
	scanf("%d %d %d",&bd,&bm,&by);

	printf("\n \tDate of check-in :");
	scanf("%d %d %d",&d,&m,&y);

	printf("\n \tDate of check-out :");
	scanf("%d %d %d",&d1,&m1,&y1);

	patient pt(int p_id,char *name,int bd,int bm,int by,int d,int m,int y,int b1,int m1,int y1);



	printf("\n > Enter the  details :-");

	printf("\n \tward no : ");
	scanf("%d",&ward_no);
	printf("\n \tbed no : ");
	scanf("%d",&bed_no);
	printf("\n \tcharges per day : ");
	scanf("%f",&cpd);

	ipd ob(int ward_no,int bed_no,float cpd);
	return 0;
}
