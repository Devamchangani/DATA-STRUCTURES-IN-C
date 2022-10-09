/*
 * q1.cpp
 *
 *  Created on: 21-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	int l,w,area,perimeter;

	cout<<"Enter the length of rectangle";
	cin>>l;
	cout<<"Enter the width of rectangle";
	cin>>w;

	//------------------- count the area and perimeter ------------------//

	area=l*w;
	perimeter=2(l+w);

	cout<<"Area of Rectangle is : "<<area<<endl<<endl;
	cout<<"Perimeter of Rectangle is : "<<perimeter;




	return 0;
}


