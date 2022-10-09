/*
 * q6.cpp
 *
 *  Created on: 23-Jul-2022
 *      Author: root
 */
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	float x=1.34700;
	cout<<" > setprecision() using fixed : \n ";

	cout<<fixed<<setprecision(2)<<x<<"\n ";

	cout<<" > setprecision() using scientific : \n ";
	cout<<scientific<<setprecision(3)<<x<<endl;

	return 0;
}



