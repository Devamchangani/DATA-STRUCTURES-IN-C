/*
 * q13.cpp
 *
 *  Created on: 04-Aug-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class binary
{
	float num,result;


public:

	binary operator-(binary b2)
	{
		binary b3;

		b3.num=num-b2.num;

		return b3;
	}

	binary operator+(binary b2)
	{
		binary b3;

		b3.num=num+b2.num;

		return b3;
	}

	binary operator*(binary b2)
	{
		binary b3;

		b3.num=num*b2.num;

		return b3;
	}

	binary operator/(binary b2)
	{
		binary b3;

		b3.num=num/b2.num;

		return b3;
	}

	friend istream & operator >>(istream &set,binary &tem)
	{
		cout<<"\n > Enter Number : ";
		set>>tem.num;

		//tem.st=s;

		return set;
	}

	friend ostream & operator <<(ostream &get,binary &t)
	{
		get<<"\n > Your Numbers is : "<<t.num;

		return get;
	}
};

int main()
{
	binary b1,b2,b3;

	char ch;

	do
	{
		cout<<"\n\n\n > =============== * MENU * =============== \n\n";
		cout<<"\n a. >> insertion ";
		cout<<"\n b. << extraction ";
		cout<<"\n c. + addition op ";
		cout<<"\n d. - Subtraction op ";
		cout<<"\n e. * MUltiplication op ";
		cout<<"\n f. / Division op ";
		cout<<"\n g. EXIT ";


		cout<<"\n > ENter your choice : ";
		cin>>ch;

		switch(ch)
		{
		case 'a':
			cin>>b1;
			cin>>b2;
			break;
		case 'b':
			cout<<b1;
			cout<<b2;
			break;
		case 'c':
			cin>>b1;
			cin>>b2;
			b3=b1+b2;
			cout<<b3;
			break;
		case 'd':
			cin>>b1;
			cin>>b2;
			b3=b1-b2;
			cout<<b3;
			break;
		case 'e':
			cin>>b1;
			cin>>b2;
			b3=b1*b2;
			cout<<b3;
			break;
		case 'f':
			cin>>b1;
			cin>>b2;
			b3=b1/b2;
			cout<<b3;
			break;
		case 'g':
			exit(0);
		}
	}while(ch!='g');


}

