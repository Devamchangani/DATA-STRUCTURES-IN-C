/*
 * q10.cpp
 *
 *  Created on: 02-Aug-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class timee
{
	int hours;
	int minutes;
	int seconds;

public:

	int operator == (timee t2)
	{
		if(hours == t2.hours)
		{
			if(minutes == t2.minutes)
			{
				if(seconds == t2.seconds)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}

	friend istream & operator >>(istream &get,timee &obj);
	friend ostream & operator <<(ostream &dis,timee &obj);

};


istream & operator >>(istream &get,timee &obj)
{
	int hr,min,sec;

		cout<<"\n > Enter the hours : ";
		get>>hr;

		cout<<"\n > Enter the minutes : ";
		get>>min;

		cout<<"\n > Enter the seconds : ";
		get>>sec;

		obj.hours=hr;
		obj.minutes=min;
		obj.seconds=sec;

		return get;
}

ostream & operator <<(ostream &dis,timee &obj)
{
	dis<<"\n > The Time is  > "<<obj.hours<<" : "<<obj.minutes<<" : "<<obj.seconds<<endl;

	return dis;
}


int main()
{
	timee t1,t2;

	cout<<"\n > Enter your first time : \n";
	cin>>t1;
	cout<<t1;

	cout<<"\n > Enter your second time : \n";
	cin>>t2;
	cout<<t2;

	if(t1==t2)
	{
		cout<<"\n > Both time are same. ";
	}
	else
	{
		cout<<"\n > Both time are not same !!! ";
	}
}


