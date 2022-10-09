/*
 * sum.cpp
 *
 *  Created on: 18-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	float num1,num2,sum,avg;
	cout << "Enter any two numbers" << endl;
	cin>>num1;
	cin>>num2;

	sum=num1+num2;
	avg=(num1+num2)/2;

	cout << "The sum is : " << sum << endl;
	cout << "The average is : " << avg << endl;

	return 0;
}


