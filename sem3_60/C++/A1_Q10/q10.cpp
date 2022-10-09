/*
 * q10.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int n,i;

	cout<<"> Enter any number : ";
	cin>>n;

	//-------------------- print the numbers in reverse order ---------------------//

	cout<<endl<<endl<<"> Numbers in reverse order : ";
	for(i=n;i>0;i--)
	{
		cout<<" "<<i<<" ";
	}

	return 0;
}


