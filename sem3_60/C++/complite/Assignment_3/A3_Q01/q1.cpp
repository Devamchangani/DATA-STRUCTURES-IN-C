/*
 * q1.cpp
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */

#include<iostream>
#include<string.h>

using namespace std;

class vehicle
{
public:
	char color[20];
	int wheels;
	long int price;
	char fuel[10];
	char type[10];//ev or non-ev

	void input_vehicle()
	{
		printf("\n > color :");
		scanf("%s",color);
		printf("\n > wheels : ");
		scanf("%d",&wheels);
		printf("\n > price : ");
		scanf("%ld",&price);
		printf("\n > Type (ev/ono-ev) : ");
		scanf("%s",type);
		printf("\n > fuel : ");
		scanf("%s",fuel);
	}

	void display_vehicle()
	{
		printf("\n > color : %s ",color);
		printf("\n > wheels : %d ",wheels);
		printf("\n > price : %ld ",price);
		printf("\n > fuel : %s ",fuel);
	}
};

class two_wheeler : public vehicle
{
	int mileage;
	int distance;
	char company[20];
	int fuel_tank;

	void input_2_wheeler()
	{
		cout<<"\n > distance : ";
		cin>>distance;
		cout<<"\n > company : ";
		cin>>company;
		cout<<"\n > Enter fuel_tank capacity : ";
		cin>>fuel_tank;
	}

	void count_mileage()
	{
		mileage=distance/fuel_tank;

		cout<<"\n > mileage : "<<mileage;
	}
};

class super_bike : public two_wheeler
{
public:

	int fuel_tank;
	char engine[20];
	int speed;

	void display()
	{
		printf("\n > speed(km/h) : ");
		scanf("%d",&speed);
		printf("\n > engine Type (ev,petrol,disel) : ");
		scanf("%s",engine);
		printf("\n > fuel tank capacity");
		scanf("%d",&fuel_tank);
	}
};

int main()
{









	return 0;
}
