/*
 * lop.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class product
{
	int expyr;
	int mfgyr;
	int yr;
public:
	void setyr();
	void life_of_prod();
};

void product::setyr()
{
	cout<<"\n > Enter manufacturing year of product : ";
	cin>>mfgyr;

	cout<<"\n > Enter expiry year of product : ";
	cin>>expyr;
}

void product::life_of_prod()
{
	yr=expyr-mfgyr;
	cout<<"\n > Life of product in year : "<<yr;
}

int main()
{
	product p;
	p.setyr();
	p.life_of_prod();

	return 0;
}
