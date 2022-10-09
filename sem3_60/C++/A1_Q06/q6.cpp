/*
 * q6.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int num1,num2,temp;

	cout<<"Enter two numbers : ";
	cin>>num1;
	cin>>num2;

	//--------------- display without swap -----------------------//

	cout<<"> Without swap num1 = "<<num1<<" num2 = "<<num2<<endl<<endl;

	//-------------- swapping ---------------//

	temp=num1;
	num1=num2;
	num2=temp;

	//--------------- display after swap ------------------------//

	cout<<"> After swap num1 = "<<num1<<" num2 = "<<num2;

	return 0;
}


