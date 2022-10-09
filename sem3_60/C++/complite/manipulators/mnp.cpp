/*
 * mnp.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

/////////////////baki che////////////////

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	//setw()
	cout<<" > setw() : \n ";
	cout<<setw(10)<<12345<<endl<<endl;


	//setfill()
	cout<<" > setfill('~') : \n ";
	cout<<setw(10)<<setfill('~')<<"hello"<<endl<<endl;


	//setprecision()
	float x=1.34700;
	cout<<" > setprecision() : \n ";

	cout<<fixed<<setprecision(2)<<x<<"\n ";
	cout<<scientific<<setprecision(3)<<x<<endl;

	//setbase()
	int value;

	cout<<"\n > Enter number : "<<endl;
	cin>>value;

	cout<<"\n > Decimal base = "<<setbase(10)<<value<<endl;
	cout<<"\n > Hex-Decimal base = "<<setbase(16)<<value<<endl;
	cout<<"\n > Octal base = "<<setbase(8)<<value<<endl;


	//setioflags()
	int value1;

	cout<<"\n > Enter number : "<<endl;
	cin>>value1;

	cout<<setiosflags(ios::dec);
	cout<<"\n > Decimal : "<<value1<<endl;
	cout<<resetiosflags(ios::dec);
	cout<<setiosflags(ios::hex);
	cout<<"\n > Hexadecimal : "<<value1<<endl;
	cout<<setiosflags(ios::oct);
	cout<<"\n > Octal : "<<value<<endl;

	return 0;
}





