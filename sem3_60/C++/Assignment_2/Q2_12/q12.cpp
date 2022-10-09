/*
 * q12.cpp
 *
 *  Created on: 02-Aug-2022
 *      Author: root
 */


#include<iostream>

using namespace std;

class CString
{
	char st[50];

public:

	void operator+(CString s1)
	{
		int i=0,j=0;

		while(st[i]!='\0')
		{
			i++;
		}
		while(s1.st[j]!='\0')
		{
			st[i++]=s1.st[j++];
		}
		st[i]='\0';
		cout<<"\n > After Concantinate string : "<<st;

	}

	int operator==(CString s1)
	{
		int i=0;
		while(st[i]!='\0')
		{
			if(st[i]!=s1.st[i])
			{
				return 0;

			}
			else
			{
				i++;
			}
		}
		return 1;
	}

	int operator!=(CString s1)
	{
		int i=0;
		while(st[i]!='\0')
		{
			if(st[i]!=s1.st[i])
			{
				return 1;

			}
			else
			{
				i++;
			}
		}
		return 0;
	}

	int operator<(CString s1)
	{
		int i=0,l=0,l1=0;

		while(st[i]!='\0')
		{
			i++;
			l++;
		}
		i=0;
		while(s1.st[i]!='\0')
		{
			i++;
			l1++;
		}

		if(l<l1)
		{
			cout<<"\n > \" "<<st<<" \" is less than \" "<<s1.st<<" \" .";
			return 1;
		}
		else
		{
			cout<<"\n > \" "<<st<<" \" is not less than \" "<<s1.st<<" \" .";
			return 0;
		}
	}

	int operator<=(CString s1)
	{
		int i=0,l=0,l1=0;

		while(st[i]!='\0')
		{
			i++;
			l++;
		}
		i=0;
		while(s1.st[i]!='\0')
		{
			i++;
			l1++;
		}

		if(l<=l1)
		{
			cout<<"\n > \" "<<st<<" \" is less than or equal to \" "<<s1.st<<" \" .";
			return 1;
		}
		else
		{
			cout<<"\n > \" "<<st<<" \" is not less than or equal to \" "<<s1.st<<" \" .";
			return 0;
		}
	}

	int operator>(CString s1)
	{
		int i=0,l=0,l1=0;

		while(st[i]!='\0')
		{
			i++;
			l++;
		}
		i=0;
		while(s1.st[i]!='\0')
		{
			i++;
			l1++;
		}

		if(l>l1)
		{
			cout<<"\n > \" "<<st<<" \" is greater than \" "<<s1.st<<" \" .";
			return 1;
		}
		else
		{
			cout<<"\n > \" "<<st<<" \" is not greater than \" "<<s1.st<<" \" .";
			return 0;
		}
	}

	int operator>=(CString s1)
	{
		int i=0,l=0,l1=0;

		while(st[i]!='\0')
		{
			i++;
			l++;
		}
		i=0;
		while(s1.st[i]!='\0')
		{
			i++;
			l1++;
		}

		if(l>=l1)
		{
			cout<<"\n > \" "<<st<<" \" is greater than or equal to \" "<<s1.st<<" \" .";
			return 1;
		}
		else
		{
			cout<<"\n > \" "<<st<<" \" is not greater than or equal to \" "<<s1.st<<" \" .";
			return 0;
		}
	}

	friend istream & operator >>(istream &set,CString &tem)
	{
		string s;
		cout<<"\n > Enter the string : ";
		set>>tem.st;

		//tem.st=s;

		return set;
	}

	void display()
	{
		cout<<""<<st;
	}
	friend ostream & operator <<(ostream &get,CString &t)
	{
		get<<"\n > Your string is : "<<t.st;

		return get;
	}

};

int main()
{
	CString cs1,cs2,cs3,cs4;

	char ch;

	do
	{
		cout<<"\n\n\n > =============== * MENU * =============== \n\n";

		cout<<"\n a. >> for cin ";
		cout<<"\n b. << for cout ";
		cout<<"\n c. + Concantinate strings ";
		cout<<"\n d. == Compare two strings ";
		cout<<"\n e. != Compare two strings ";
		cout<<"\n f. < for length ";
		cout<<"\n g. <= for length ";
		cout<<"\n h. > for length ";
		cout<<"\n i. >= for length ";
		cout<<"\n j. EXIT ";


		cout<<"\n > ENter your choice : ";
		cin>>ch;

		switch(ch)
		{
		case 'a':
			cin>>cs1;
			break;
		case 'b':
			cout<<cs1;
			break;
		case 'c':
			cin>>cs2;
			cout<<cs2;
			cs1+cs2;
			break;
		case 'd':
			cin>>cs2;
			cout<<cs2;
			cin>>cs3;
			cout<<cs3;

			if(cs2==cs3)
			{
				cout<<"\n > Both strings are same.";
			}
			else
			{
				cout<<"\n > Both strings are not same !!! ";
			}
			break;
		case 'e':
			cin>>cs2;
			cout<<cs2;
			cin>>cs4;
			cout<<cs4;

			if(cs2!=cs4)
			{
				cout<<"\n > Yes, both strings are not same.";
			}
			else
			{
				cout<<"\n > No, both strings are same !!! ";
			}
			break;
		case 'f':
			cin>>cs2;
			cout<<cs2;
			cin>>cs4;
			cout<<cs4;
			cs2<cs4;

			break;
		case 'g':
			cin>>cs2;
			cout<<cs2;
			cin>>cs4;
			cout<<cs4;
			cs2<=cs4;
			break;
		case 'h':
			cin>>cs2;
			cout<<cs2;
			cin>>cs4;
			cout<<cs4;
			cs2>cs4;
			break;
		case 'i':
			cin>>cs2;
			cout<<cs2;
			cin>>cs4;
			cout<<cs4;
			cs2>=cs4;
			break;
		case 'j':
			exit(0);
		}
	}while(ch!='j');


}
