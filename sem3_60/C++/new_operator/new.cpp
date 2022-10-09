/*
 * new.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int *a=new int;
	int *b=new int;
	int *sum=new int;

	cout<<"\n > Enter the value for a and b : ";
	cin>>*a>>*b;

	*sum=*a+*b;
	cout<<"\n > Sum of a and b is :"<<*sum;

	delete a;
	delete b;
	delete sum;

	return 0;
}


