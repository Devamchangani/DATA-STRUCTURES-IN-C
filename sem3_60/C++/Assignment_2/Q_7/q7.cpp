/*
 * q7.cpp
 *
 *  Created on: 30-Jul-2022
 *      Author: root
 */

#include<iostream>
#include<iomanip>

using namespace std;

class calander
{
	int year,day;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string months[12]={"January","February","March","April","May","June","July","August","Suptember","October","November","December"};
	int dinm; 	//day in month

public:

	void input()
	{
		cout<<"\n > Enter Year : ";
		cin>>year;

		leap(year);
	}

	int get_fday(int y)
	{
		int fday;

		fday=(((y-1)*365)+((y-1)/4)-((y-1)/100)+((y/400)+1))%7;

		return fday;
	}
	void leap(int y)
	{
		if((year%4==0 && year%100!=0)||year%400==0)
		{
			month[1]=29;
		}
	}

	void cal_print()
	{
		int wday=0,stday=0;

		stday=get_fday(year);

		for(int m=0;m<12;m++)
		{
			dinm = month[m];

			cout<<"\n\n\n\t\t\t "<<months[m]<<" , "<<year<<endl;

			cout<<"\n      SUN     MON     TUE     WED     THU     FRI     SAT \n";

			for(wday=0;wday<stday;wday++)
			{
				cout<<"       -";
			}

				for(day=1;day<=dinm;day++)
				{
					if(wday>6)
					{
						cout<<endl;
						wday=0;
					}
					cout<<" "<<setw(7)<<day;
					wday++;
				}
			stday=wday;
		}
	}




};

int main()
{
	calander c;
	//int t=0;

	c.input();
	//t=c.get_fday(2022);

	//cout<<"\n > First day : "<<t;

	c.cal_print();

	return 0;
}


