/*
 * cbr.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

void swap(int &x,int &y);	//declaration	//actual variable
void swap(int &x,int &y) //definition		//reference variable
{
	int z;
	z=x;
	x=y;
	y=z;

	cout<<"\n > value is : "<<x<<" "<<y<<endl;
}


int main()
{
	int a=10,b=20;
	cout<<"\n > Before Function call value of a and b is : "<<a<<" "<<b<<endl;

	swap(a,b);
	cout<<"\n > After Function call value of a and b is : "<<a<<" "<<b<<endl;

	return 0;
}




