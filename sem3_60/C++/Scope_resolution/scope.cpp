/*
 * scope.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;
int m=5;	// Global variable

int main()
{
	int m=15;

	cout<<"\n > The value of m is : "<<m;

	cout<<"\n > The value of Global ::m is : "<<::m;

	return 0;
}

