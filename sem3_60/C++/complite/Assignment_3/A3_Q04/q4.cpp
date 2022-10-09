/*
 * q4.cpp
 *
 *  Created on: 30-Aug-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int n=0;

class bill
{
private:
	static int bill_no;
	int employee_id;

public :
	bill()
	{
		employee_id=1;
	}

	void get_data()
	{
		bill_no++;

		cout<<"\n > Enter Employee id : "<<endl;
		cin>>employee_id;
	}

	void print_data()
	{
		cout<<"\n > Bill No : "<<bill_no;
		cout<<"\n > Employee id : "<<employee_id;
	}
};

class add_items:public bill
{
private:
	char item_name[10][10];
	float mrp[20];
	int qun[20],amount[20];

protected:
	float total =0;

public :
	add_items()
	{
		int ch;

		do
		{
			cout<<"\n > Enter item name : ";
			cin>>item_name[n];
			cout<<"\n price : ";
			cin>>mrp[n];
			cout<<"\n quantity : ";
			cin>>qun[n];

			amount[n]=mrp[n]*qun[n];

			total=total+amount[n];

			n++;

			cout<<"\n > continue (y=0/n=-1) : ";
			cin>>ch;
		}while(ch != -1);
	}

	void print_items()
	{
		int i;

		if(n==0)
		{
			cout<<"\n Empty Cart!!!";
			return;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n item name : "<<item_name[i];
				cout<<"\n item price of one unit: "<<mrp[i];
				cout<<"\n item quantity : "<<qun[i];
				cout<<"\n total amount : "<<amount[n];
			}
		}
	}
};

class display_bill:public add_items
{
protected:
	float discount =0;
	float net_amt=0;


public:

	void final_bill()
	{
		get_data();
		add_items();

		print_data();
		print_items();

		discount=total * 15/100;

		net_amt=total-discount;

		cout<<"\n Total amount : "<<total;
		cout<<"\n Discount (15%) : "<<discount;
		cout<<"\n Net amount : "<<net_amt;

	}

};

int bill::bill_no=0;

int main()
{
	display_bill db;

	db.final_bill();
    return 0;
}
