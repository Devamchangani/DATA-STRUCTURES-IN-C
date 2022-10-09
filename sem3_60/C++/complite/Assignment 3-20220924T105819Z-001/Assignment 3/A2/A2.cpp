/*
 * A2.cpp
 *
 *  Created on: 24-Aug-2022
 *      Author: root
 */
#include <iostream>
using namespace std;

class patient
{
	char name[30];
	int age;
	char gender[10];
	int contact_no ;

public:
	void insert()
	{
		cout<<"\nPatient Details: \n ";
		cout<<"Enter Patient's Name: "<<endl;
		cin>>name;
		cout<<"Enter Patient's Age: "<<endl;
		cin>>age;
		cout<<"Enter Patient's gender: "<<endl;
		cin>>gender;
		cout<<"Enter Patient's Phone Number: "<<endl;
		cin>>contact_no;
	}
	void display()
	{
		cout<<"Patient's Name: "<<name<<endl;
		cout<<"Patient's Age: "<<age<<endl;
		cout<<"Patient's gender: "<<gender<<endl;
		cout<<"Patient's Contact No.: "<<contact_no<<endl;
	}

};
class IPD
{
	int ward_no, bed_no, charge_per_day;
public:
	void ipd_insert()
	{
		cout<<"IPD:==========";
		cout<<"Enter Ward no.: ";
		cin>>ward_no;
		cout<<"Enter Bed no.: ";
		cin>>bed_no;
		cout<<"Charge per day: ";
		cin>>charge_per_day;
	}

	void ipd_display()
	{
		cout<<"IPD DETAILS:\n\n";
		cout<<"ward no.: \n"<<ward_no;
		cout<<"bed no.: \n"<<bed_no;
		cout<<"Charge: \n"<<charge_per_day;

	}
};

class IPD_patient : public IPD,public patient
{
	int no_of_days;
public:

	void insert_ipd_patient_details()
	{
		insert();
		ipd_insert();

		cout<<"Enter no. of days patient admitted: ";
		cin>>no_of_days;

	}

	void display_ipd_patient_details()
	{
		display();
		ipd_display();
		cout<<"\n\n";
		cout<<"No. of days patient admitted: "<<no_of_days;

	}
};

int main()
{
	IPD_patient *ipdt;
	int i,size;
	cout<<"\n Enter the no. of Patient: ";
	cin>>size;
	ipdt=new IPD_patient[size];
	for(i=0; i<size; i++)
	{
		ipdt[i].insert_ipd_patient_details();
		ipdt[i].display_ipd_patient_details();
	}
	return 0;
}
