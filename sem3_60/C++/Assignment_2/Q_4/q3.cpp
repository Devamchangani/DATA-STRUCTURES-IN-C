/*
 * q3.cpp
 *
 *  Created on: 22-Jul-2022
 *      Author: root
 */

#include<iostream>
#include<string.h>

using namespace std;

class employee
{
	struct emmp
	{
		int emp_code;
		string emp_name;
		string emp_desg;
		struct dob
		{
			int d;
			int m;
			int y;
		}dob;
		struct doj
		{
			int dd;
			int mm;
			int yy;
		}doj;
		long b_salary;
		float hra;
		float da;
		string dept;
		double t_salary;
		int exp;
	}ep[5];
	int size;

public:
	void input()
	{
		cout<<"\n > Enter the value for size : ";
		cin>>size;

		for(int i=0;i<size;i++)
		{
			cout<<"\n\n > Enter the value of "<<i+1<<" employee : \n";
			cout<<"\n > Enter Employee Code : ";
			cin>>ep[i].emp_code;
			cout<<"\n > Enter The Employee Name : ";
			cin>>ep[i].emp_name;
			cout<<"\n > Enter The Designation of Employee : ";
			cin>>ep[i].emp_desg;
			cout<<"\n > Enter The Date of Birth : ";
			cin>>ep[i].dob.d>>ep[i].dob.m>>ep[i].dob.y;
			cout<<"\n > Enter The Date of Joining : ";
			cin>>ep[i].doj.dd>>ep[i].doj.mm>>ep[i].doj.yy;
			cout<<"\n > Enter The Employee Salary : ";
			cin>>ep[i].b_salary;
			cout<<"\n > Enter The Employee Department : ";
			cin>>ep[i].dept;

			if(ep[i].b_salary < 30000)
			{
				ep[i].da = ep[i].b_salary * 0.60;
				ep[i].hra = ep[i].b_salary * 0.20;
			}
			else
			{
				if(ep[i].b_salary >= 30000 && ep[i].b_salary <= 45000)
				{
					ep[i].da = ep[i].b_salary * 0.70;
					ep[i].hra = ep[i].b_salary * 0.30;
				}
				else
				{
					if(ep[i].b_salary > 45000)
					{
						ep[i].da = ep[i].b_salary * 0.85;
						ep[i].hra = ep[i].b_salary * 0.40;
					}
				}
			}
		}
	}


	void display()
	{
		cout<<"\n\n\n > Employee details : \n";
		cout<<"\n > Employee code \t Name \t Designation \t Date of Birth \t Date of Joining \t Basic Salary \t Department \n";
		for(int i=0;i<size;i++)
		{
			cout<<"\n   "<<ep[i].emp_code<<"\t\t\t"<<ep[i].emp_name<<"\t"<<ep[i].emp_desg<<"\t\t"<<ep[i].dob.d<<"/"<<ep[i].dob.m<<"/"<<ep[i].dob.y<<"\t\t"<<ep[i].doj.dd<<"/"<<ep[i].doj.mm<<"/"<<ep[i].doj.yy<<"\t\t\t"<<ep[i].b_salary<<"\t\t\t"<<ep[i].dept;
		}
	}
	void display1()
	{
		cout<<"\n > Salary \t DA \t HRA \t Gross";

		for(int i=0;i<size;i++)
		{
			cout<<"\n   "<<ep[i].b_salary<<"\t"<<ep[i].da<<"\t"<<ep[i].hra<<"\t"<<ep[i].t_salary;
		}
	}
	void total_salary()
	{
		cout<<"\n\n\n > Total salary of employees : \n";
		cout<<"\n > Employee code \tName \t Basic salary \t total salary \n";

		for(int i=0;i<size;i++)
		{
			ep[i].t_salary = ep[i].b_salary + ep[i].da + ep[i].hra;
			cout<<"\n    "<<ep[i].emp_code<<"\t\t\t"<<ep[i].emp_name<<"\t"<<ep[i].b_salary<<"\t\t\t"<<ep[i].t_salary;
		}
	}
	void srch_dept()
	{
		string tstr;
		int flag=0;

		cout<<"\n > Enter the department : ";
		cin>>tstr;

		for(int i=0;i<size;i++)
		{
			if(tstr==ep[i].dept)
			{
				if(flag==0)
				{
					cout<<"\n\n > Employee Code \t Name \t Department \n";
				}
				cout<<"\n    "<<ep[i].emp_code<<"\t\t\t"<<ep[i].emp_name<<"\t"<<ep[i].dept;
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"\n > Not Found !!! ";
		}
	}
	void count_exp()
	{
		cout<<"\n\n\n > Employee Experience : ";
		cout<<"\n\n > Employee Code \t Name \t Basic Experience \n";

		for(int i=0;i<size;i++)
		{
			ep[i].exp=2022-ep[i].doj.yy;
			cout<<"\n      "<<ep[i].emp_code<<"\t\t"<<ep[i].emp_name<<"\t"<<ep[i].exp;
		}
	}

	void srch_exp();

};

void employee::srch_exp()
{
	int flag=0;

	cout<<"\n\n\n > Employee with more than 5 years experience : ";
	cout<<"\n\n   Employee Code \t Name \t Experience \n";
	for(int i=0;i<size;i++)
	{
		if(ep[i].exp>5)
		{
			cout<<"\n      "<<ep[i].emp_code<<"\t\t"<<ep[i].emp_name<<"\t"<<ep[i].exp;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"\n > Not Found !!! ";
	}
}

int main()
{
	employee e1;

	e1.input();
	e1.display();
	e1.total_salary();
	e1.srch_dept();
	e1.count_exp();
	e1.srch_exp();
	return 0;
}

