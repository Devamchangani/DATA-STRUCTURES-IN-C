/*
 * 14.cpp
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

	cout<<endl<<endl;

	//---------------- input values -----------------//

	for(i=0;i<n;i++)
	{
		cout<<"Enter the value for "<<i+1<<" element : ";
		cin>>a[i];
	}

	//----------------- display array -----------------//

	cout<<"\n\n> Your array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	//-------------------- reverse array --------------//

	j=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;

		j--;
	}

	//----------------- display array after reverse -----------------//


	cout<<"\n\n> Your array after reverse the element : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
