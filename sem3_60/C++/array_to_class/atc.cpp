/*
 * atc.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class student
{
	int rno;
	int sub[3],total=0;
	string name;
	float per=0;
public:
	void setdetails();
	void getdetails();
};

void student::setdetails()
{
	cout<<"\n > Enter roll number : ";
	cin>>rno;
	cout<<"\n > Enter name : ";
	cin>>name;

	for(int i=0;i<3;i++)
	{
		cout<<"\n Enter "<<i+1<<" Subject marks : ";
		cin>>sub[i];

		total = total + sub[i];
	}
	per =total/3;
}

void student::getdetails()
{
	cout<<"   Roll Number : "<<rno<<endl;
	cout<<"   Total : "<<total<<endl;
	cout<<"   Percentage : "<<per<<endl;
}

int main()
{
	int n;

	cout<<"\n > Enter no. of student : "<<endl;
	cin>>n;

	student s1[n];

	for(int i=0;i<n;i++)
	{
		cout<<"\n > Enter student "<<i+1<<" details : ";
		s1[i].setdetails();
	}

	for(int i=0;i<n;i++)
	{
		cout<<"\n\n > Student "<<i+1<<" details are :\n";
		s1[i].getdetails();
	}

	return 0;
}


