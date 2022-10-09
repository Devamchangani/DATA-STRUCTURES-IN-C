/*
 * q8.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int n,sum,i,j,k=0,flag=0;

	cout<<"> Enter any number : ";
	cin>>n;

	cout<<"> Prime number are : ";

	for(i=2;i<10000;i++)
	{
		//------------- sort the prime numbers -----------------//

		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}

		//---------------- sum of P.N. & count the P.N. --------------//

		if(flag!=1)
		{
			cout<<i<<" ";
			sum=sum+i;
			k++;
		}

		//--------------- compare count of P.N. and user entered number -------------//

		if(k==n)
		{
			cout<<"\n\n> Sum of "<<n<<" number of prime numbers : "<<sum;
			return 0;
		}
	}

}


