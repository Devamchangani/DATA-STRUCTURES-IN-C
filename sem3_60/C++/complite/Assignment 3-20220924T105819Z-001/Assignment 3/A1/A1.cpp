/*
 * A1.cpp
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */
#include<iostream>
#include<string.h>
using namespace std;

class Vehicle
{
	int regno;
	char ftype[20];
public:
	void getdata()
	{
		cout<<"\nEnter Registration no.: ";
		cin>>regno;
		cout<<"\nFuel type: ";
		cin>>ftype;
	}
	void display()
	{
		cout<<"\nRegistration no: "<<regno<<endl;
		cout<<"\nFuel type: "<<ftype<<endl;;
	}
};

class wheeler : public Vehicle
{
	float dist;
	float mileage;
public:
	void getdata()
	{
		Vehicle :: getdata();
		cout<<"\nEnter Distance:";
		cin>>dist;
		cout<<"\n Mileage: ";
		cin>>mileage;
	}
	void display()
	{
		Vehicle :: display();
		cout<<"\nDistance: "<<dist<<endl;
		cout<<"\nMileage: "<<mileage<<endl;;
	}
};

int main()
{
	wheeler w;

	w.getdata();
	w.display();

	return 0;
}






