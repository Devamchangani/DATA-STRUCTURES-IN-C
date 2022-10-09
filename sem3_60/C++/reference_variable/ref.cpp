/*
 * ref.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int x[5]={1,2,3,4,5};
	int &y=x[2];

	cout<<"\n > TRhe value of y is : "<<y;

	return 0;
}


