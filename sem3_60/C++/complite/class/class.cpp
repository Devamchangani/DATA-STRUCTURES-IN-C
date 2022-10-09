/*
 * class.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class rectangle
{
private:
	int length,breadth;
public:
	void setinput(int l,int b)
	{
		length=l;
		breadth=b;
	}
	void getarea();
	void getperimeter()
	{
		cout<<"\n > Perimeter : "<<2*(length+breadth)<<endl;
	}
};

// outside class definition

void rectangle::getarea()
{
	cout<<"\n > Area : "<<length*breadth<<endl;
}

int main()
{
	rectangle r;
	int len,br;

	cout<<"\n > Enter length and breadth of rectangle : ";
	cin>>len>>br;

	r.setinput(len,br);
	r.getarea();
	r.getperimeter();

	return 0;
}








