/*
 * q3.cpp
 *
 *  Created on: 27-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class datee
{
private:
	int d,m,y;
	int d1,m1,y1;
	int h,mn,s;

public:

	void input_date()		//for input date
	{
		cout<<"\n > Enter The Date : ";
		cout<<"\n > Enter the Date : ";
		cin>>d;
		cout<<"\n > Enter the Month : ";
		cin>>m;
		cout<<"\n > Enter the Year : ";
		cin>>y;
	}

	void input_time()		//for input time
	{
		cout<<"\n\n\n > Enter The Time : ";
		cout<<"\n > Enter the Hour : ";
		cin>>h;
		cout<<"\n > Enter the Minute : ";
		cin>>mn;
		cout<<"\n > Enter the Second : ";
		cin>>s;
	}

	void leap_year()		//for input time
	{
		if((y%4==0 && y%100!= 0) || y%400==0)
		{
			cout<<"\n > "<<y<<" is a Leap Year. ";
		}
		else
		{
			cout<<"\n > "<<y<<" is Not a Leap Year !!!";
		}
	}
	void format_date()		//for formating date and time
	{
		cout<<"\n > Date is : "<<d<<"/"<<m<<"/"<<y;
		cout<<"\n > Time is : "<<h<<":"<<mn<<":"<<s;

	}

	void retrive_year()		//for retrieve year
	{
		cout<<"\n > Year is : "<<y;
	}

	void retrive_month()		//for retrieve month
	{
		cout<<"\n > Month is : "<<m;
	}

	void retrive_day()		//for retrieve day
	{
		cout<<"\n > Day is : "<<d;
	}

	void retrive_hour()		//for retrieve hour
	{
		cout<<"\n > Hour is : "<<h;
	}

	void retrive_minute()		//for retrieve minutes
	{
		cout<<"\n > Minutes is : "<<mn;
	}

	void retrive_second()		//for retrieve second
	{
		cout<<"\n > Second is : "<<s;
	}

	void diff_date()		//for difference the date
	{
		datee dd2;

		cout<<"\n > Enter the date which you want to compare : ";
		cout<<"\n > Enter the Date : ";
		cin>>d1;
		cout<<"\n > Enter the Month : ";
		cin>>m1;
		cout<<"\n > Enter the Year : ";
		cin>>y1;

		int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//days in month

		if((y%4==0 && y%100!= 0) || y%400==0)	//checking for leap year
		{
			month[1]=29;
		}

		if(d1>d)		//for diff of date
		{
			d=d+month[m];
			m=m-1;
		}
		dd2.d=d-d1;

		if(m1>m)	//for diff of month
		{
			m=m+1;
			y=y-1;
		}
		dd2.m=m-m1;
		dd2.y=y-y1;		//for diff of year

		cout<<"\n > Date Different is : \n\t\t\t"<<dd2.d<<"days: \n\t\t\t"<<dd2.m<<"months: \n\t\t\t"<<dd2.y;
		return;
	}





};

int main()
{
	datee dd;

	char ch;

		do
			{
				cout<<"\n\n\n > =============== * MENU * =============== \n\n";
				cout<<"\n a. Insert_Date ";
				cout<<"\n b. Insert_Time ";
				cout<<"\n c. Format Date ";
				cout<<"\n d. Difference between 2 date ";
				cout<<"\n e. Check leap year ";
				cout<<"\n f. Retrieve Day ";
				cout<<"\n g. Retrieve Month ";
				cout<<"\n h. Retrieve Year ";
				cout<<"\n i. Retrieve Hour ";
				cout<<"\n j. Retrieve Minute ";
				cout<<"\n k. Retrieve Second ";
				cout<<"\n l. EXIT ";


				cout<<"\n > ENter your choice : ";
				cin>>ch;

				switch(ch)
				{
				case 'a':
					dd.input_date();
					break;
				case 'b':
					dd.input_time();
					break;
				case 'c':
					dd.format_date();
					break;
				case 'd':
					dd.diff_date();
					break;
				case 'e':
					dd.leap_year();
					break;
				case 'f':
					dd.retrive_year();
					break;
				case 'g':
					dd.retrive_year();
					break;
				case 'h':
					dd.retrive_year();
					break;
				case 'i':
					dd.retrive_year();
					break;
				case 'j':
					dd.retrive_year();
					break;
				case 'k':
					dd.retrive_year();
					break;
				case 'l':
					exit(0);
				}
			}while(ch!='l');

}


