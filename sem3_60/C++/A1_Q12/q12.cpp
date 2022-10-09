/*
 * q12.cpp
 *
 *  Created on: 20-Jun-2022
 *      Author: root
 */


#include<iostream>

using namespace std;

int main()
{
	int a[10],sum=0,avg=0,n;

	cout<<"\n> Enter the size of array : ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value for "<< i+1 <<" element :";
		cin>>a[i];
		sum=sum+a[i]; // count sum of all element
	}
	avg=sum/n; // count avg

	cout<<"> Sum of an array is : "<<sum<<endl;
	cout<<"> Average of an array is : "<<avg;



	return 0;
}

