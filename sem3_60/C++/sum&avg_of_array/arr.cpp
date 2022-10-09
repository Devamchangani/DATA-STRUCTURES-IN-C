/*
 * arr.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	int i;
	int sum=0,avg=0;

	cout<<"\n > Enter 10 array elements : ";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}

	cout<<"\n < Array elements are : ";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<"\n\n > Sum of all elements : "<<sum;
	avg=sum/10;
	cout<<"\n\n > Average : "<<avg;

	return 0;
}


