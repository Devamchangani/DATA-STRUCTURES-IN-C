/*
 * q15.cpp
 *
 *  Created on: 24-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int a[10],n;
	int i,max=0,min;


	cout<<"\n> Enter the size of array : ";
	cin>>n;

	//----------------- Input values -----------------//

	for(i=0;i<n;i++)
	{
		cout<<"Enter the value for "<<i+1<<" element : ";
		cin>>a[i];
	}

	//----------------- Display array -----------------//

	cout<<"\n\n> Your array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i]) // for max
		{
			max=a[i];
		}
		if(min>a[i]) //for min
		{
			min=a[i];
		}
	}

	cout<<"\n\n> Largest element of array : "<<max;
	cout<<"\n\n> Smallest element of array : "<<min;
	return 0;
}


