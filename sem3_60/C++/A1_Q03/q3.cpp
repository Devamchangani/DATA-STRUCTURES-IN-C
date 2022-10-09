/*
 * q3.cpp
 *
 *  Created on: 24-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int num1,num2,q,r;

	cout<<"\n> Enter First numbers : ";
	cin>>num1;
	cout<<"\n> Enter Second numbers : ";
	cin>>num2;

	q=num1/num2; //quotient
	r=num1%num2; //remainder

	cout<<"\n> Quotient : "<<q;
	cout<<"\n> Remainder : "<<r;

	return 0;
}


