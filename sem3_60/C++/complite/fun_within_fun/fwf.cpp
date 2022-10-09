/*
 * fwf.cpp
 *
 *  Created on: 09-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class set
{
	int m,n;
public:
	void input();
	void display();
	int largest();
};

int set::largest()
{
	if(m>=n)
		return n;
	else
		return n;
}

void set::input()
{
	cout<<"\n > Input value for m and n : ";
	cin>>m>>n;
}

void set::display()
{
	cout<<"\n > Largest value is "<<largest()<<endl;
}

int main()
{
	set s;
	s.input();
	s.display();
	return 0;
}
