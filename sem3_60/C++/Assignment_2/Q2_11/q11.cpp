/*
 * q11.cpp
 *
 *  Created on: 04-Aug-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class Toggle
{
	char word[20];

public:

	Toggle operator ~ ()
	{
		Toggle t2;
		int i=0;
		while(word[i]!='\0')
		{
			if(word[i]>='a' && word[i]<'z')
			{
				t2.word[i]=word[i]-32;
			}
			else
			{
				if(word[i]>='A' && word[i]<'Z')
				{
					t2.word[i]=word[i]+32;
				}
			}
			i++;
		}

		return t2;
	}

	friend istream & operator >>(istream &set,Toggle &tem)
	{

		cout<<"\n > Enter the string : ";
		set>>tem.word;

		return set;
	}

	friend ostream & operator <<(ostream &get,Toggle &t)
	{
		get<<"\n > Your string is : "<<t.word;

		return get;
	}

};


int main()
{
	Toggle t1,t2;

	cin>>t1;
	cout<<t1;

	t2=t1.operator~();
	cout<<t2;

	return 0;
}




