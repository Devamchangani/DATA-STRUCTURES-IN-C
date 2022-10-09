/*
 * q9.cpp
 *
 *  Created on: 02-Aug-2022
 *      Author: root
 */


#include<iostream>
#include<iomanip>

#define size 3

using namespace std;

int row=0;

class matric
{
	int mt[size][size];


public:

	void setDetails()
	{

		cout<<"\n > Enter the value for matrix : \n\n";
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<"\n Enter the value for "<<i<<" "<<j<<" element : ";
				cin>>mt[i][j];
			}
		}
	}

	void getDetails()
	{
		cout<<"\n > Your matrix is : \n\t";
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<" "<<setw(3)<<mt[i][j];
			}
			cout<<"\n\t";
		}
	}

	friend matric operator + (matric m1,matric m2);
};

matric operator + (matric m1,matric m2)
{
	matric m3;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			m3.mt[i][j]= m1.mt[i][j] + m2.mt[i][j];
		}
	}

	return  m3;
}

int main()
{
	matric m,m1,m3;

	cout<<"\n > Enter the size of (row/col) matrix : ";
	cin>>row;

	m.setDetails();
	m1.setDetails();
	m.getDetails();
	m1.getDetails();

	m3 = operator + (m,m1);
	m3.getDetails();

}
