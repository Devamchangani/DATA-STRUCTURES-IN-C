/*
 * q9.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int n,i,sum=0;

	cout<<"> Enter any number : ";
	cin>>n;

	//------------------------- sum of n natural numbers -------------------------//

	for(i=1;i<=n;i++)// it goes for 1 to n
	{
		sum=sum+i;
	}

	cout<<"> Sum of first "<<n<<" natural numbers : "<<sum;

	return 0;
}


