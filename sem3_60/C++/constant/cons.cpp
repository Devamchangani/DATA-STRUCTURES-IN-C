/*
 * cons.cpp
 *
 *  Created on: 08-Jul-2022
 *      Author: root
 */
/*
// 1st method

#include<iostream>
#define length 10
#define width 5

using namespace std;

int main()
{
	int area;

	area = length * width;

	cout<<"\n > Area : "<<area;

	return 0;
}

*/
// 2nd method

#include<iostream>


using namespace std;

int main()
{
	int const length=10,width=5;
	int area;

	area = length * width;

	cout<<"\n > Area : "<<area;

	return 0;
}
