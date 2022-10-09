/*
 * math.cpp
 *
 *  Created on: 05-Jul-2022
 *      Author: root
 */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int num1;
	float num2,num3;

	cout<<"\n > Enter any number : ";
	cin>>num1;
	cout<<"\n > Enter any number (5>) : ";
	cin>>num2;
	cout<<"\n > Enter any float number (<5) : ";
	cin>>num3;


	//ceil()
	cout<<"\n\n";
	cout<<"\n > Ceil of integer ("<<num1<<") : "<<ceil(num1);
	cout<<"\n > Ceil of float >5 ("<<num2<<") : "<<ceil(num2);
	cout<<"\n > Ceil of float <5 ("<<num3<<") : "<<ceil(num3);

	//cos()
	cout<<"\n\n";
	cout<<"\n > Cos of integer ("<<num1<<") : "<<cos(num1);
	cout<<"\n > Cos of float >5 ("<<num2<<") : "<<cos(num2);
	cout<<"\n > Cos of float <5 ("<<num3<<") : "<<cos(num3);

	//exp()
	cout<<"\n\n";
	cout<<"\n > Exp of integer ("<<num1<<") : "<<cos(num1);
	cout<<"\n > Exp of float >5 ("<<num2<<") : "<<cos(num2);
	cout<<"\n > Exp of float <5 ("<<num3<<") : "<<cos(num3);

	//fabs()
	cout<<"\n\n";
	cout<<"\n > Fabs of integer ("<<num1<<") : "<<fabs(num1);
	cout<<"\n > Fabs of float >5 ("<<num2<<") : "<<fabs(num2);
	cout<<"\n > Fabs of float <5 ("<<num3<<") : "<<fabs(num3);

	//floor()
	cout<<"\n\n";
	cout<<"\n > Floor of integer ("<<num1<<") : "<<floor(num1);
	cout<<"\n > Floor of float >5 ("<<num2<<") : "<<floor(num2);
	cout<<"\n > Floor of float <5 ("<<num3<<") : "<<floor(num3);

	//log()
	cout<<"\n\n";
	cout<<"\n > Log of integer ("<<num1<<") : "<<log(num1);
	cout<<"\n > Log of float >5 ("<<num2<<") : "<<log(num2);
	cout<<"\n > Log of float <5 ("<<num3<<") : "<<log(num3);

	//log10()
	cout<<"\n\n";
	cout<<"\n > Log10 of integer ("<<num1<<") : "<<log10(num1);
	cout<<"\n > Log10 of float >5 ("<<num2<<") : "<<log10(num2);
	cout<<"\n > Log10 of float <5 ("<<num3<<") : "<<log10(num3);

	//pow()
	cout<<"\n\n";
	cout<<"\n > Pow of integer ("<<num1<<","<<num1<<") : "<<pow(num1,num1);
	cout<<"\n > Pow of float >5 ("<<num2<<","<<num1<<pow(num2,num1);
	cout<<"\n > Pow of float <5 ("<<num3<<","<<num2<<pow(num3,num2);

	//sin()
	cout<<"\n\n";
	cout<<"\n > Sin of integer ("<<num1<<")  : "<<sin(num1);
	cout<<"\n > Sin of float >5  ("<<num2<<") : "<<sin(num2);
	cout<<"\n > Sin of float <5 ("<<num3<<") : "<<sin(num3);

	//sqrt()
	cout<<"\n\n";
	cout<<"\n > Sqrt of integer ("<<num1<<")  : "<<sqrt(num1);
	cout<<"\n > Sqrt of float >5  ("<<num2<<") : "<<sqrt(num2);
	cout<<"\n > Sqrt of float <5 ("<<num3<<") : "<<sqrt(num3);

	//tan()
	cout<<"\n\n";
	cout<<"\n > Tan of integer ("<<num1<<")  : "<<tan(num1);
	cout<<"\n > Tan of float >5  ("<<num2<<") : "<<tan(num2);
	cout<<"\n > Tan of float <5 ("<<num3<<") : "<<tan(num3);


	return 0;
}

