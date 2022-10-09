/*
 * q33.cpp
 *
 *  Created on: 29-Aug-2022
 *      Author: root
 */

#include<iostream>
#include<string.h>

using namespace std;

class datee
{
public:
	int bd,bm,by;	//birthdate
	int dj,mj,yj;	//date of joining
	int cd,cm,cy;	//current date
	int dd,dm,dy;
	int ed,em,ey;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//days in month

	void insert()
	{
		cout<<"\n Birthdate : ";
		cin>>bd;
		cin>>bm;
		cin>>by;
	}
