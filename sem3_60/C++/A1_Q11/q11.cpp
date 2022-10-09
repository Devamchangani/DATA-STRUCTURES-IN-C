/*
 * q11.cpp
 *
 *  Created on: 24-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int main()
{
	char a[20];
	int i=0,v=0;

	cout<<"\n> Enter any string";
	cin>>a;		//taking inputs

	for(i=0;a[i]!='\0';i++)
	{
		//----------------- comparing with vowels ---------------------//
		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			v++;
		}
	}

	cout<<"\n> Vowels : "<<v;

	return 0;
}


