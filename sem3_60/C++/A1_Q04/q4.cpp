/*
 * q3.cpp
 *
 *  Created on: 20-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int num1;

	cout << "Enter a number : ";
	cin>>num1;

	if(num1>0) // for positive
	{
		cout << num1<< " is Positive Number";
	}
	else
	{
		if(num1<0) // for negative
		{
			cout  << num1<< " is Negative Number";
		}
		else // for zero
		{
			cout << num1<< " is Zero";
		}
	}

	return 0;
}

