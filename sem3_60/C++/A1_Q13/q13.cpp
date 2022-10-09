/*
 * q13.cpp
 *
 *  Created on: 24-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int a[10],n;
	int i,j,temp=0;


	cout<<"\n> Enter the size of array : ";
	cin>>n;

	//-------------- input values ----------------//

	for(i=0;i<n;i++)
	{
		cout<<"Enter the value for "<<i+1<<" element : ";
		cin>>a[i];
	}

	//--------------- display array ----------------//

	cout<<"\n\n> Your array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	//------------------ swap -------------------//

	temp=a[i-1];
	a[i-1]=a[0];
	a[0]=temp;

	//--------------- display array after swap ----------------//

	cout<<"\n\n> Your array after swap first and last element : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}


