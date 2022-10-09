/*
 * q7.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int n,i,fact=1;

	cout<<"Enter any number : ";
	cin>>n;

	//------------------- Factorial ------------------//

	for(i=1;i<=n;i++) // it goes for 1 to n
	{
		fact=fact*i;
	}

	cout<<"> Factorial : "<<fact;

	return 0;
}


