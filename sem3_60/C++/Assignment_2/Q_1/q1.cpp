/*
 * q1.cpp
 *
 *  Created on: 18-Jul-2022
 *      Author: root
 */

#include<iostream>
#include<string.h>

using namespace std;

class stringg
{
private:
	char st[50],str[20];
	char cst[20];
	int ln=0;
public:
	void los();		//for length of string
	void ucase();	//for upper case
	void lcase();	//for lower case
	void cmp();		//for Comparison of two string
	void cpy();		//for copy string
	void con();		//for Concatenation
	void rev();		//for reverse the string
	int pelin();	//check for Palindrome or not
};

void stringg::los()		//Definition of length function
{
	int i=0;
	cout<<"\n > Enter string : ";
	cin>>st;

	do
	{
		ln++;
		i++;
	}while(st[i] != '\0');


	cout<<"\n > Length of the string is : "<<ln;
	return;
}

void stringg::ucase()		//Definition of upper case function
{
	int i=0;

	cout<<"\n > Enter string : ";
	cin>>st;

	while(st[i]!='\0')
	{
		if(st[i]>='a' && st[i]<='z')
		{
			st[i]=st[i]-32;
			i++;
		}
		else
		{
			i++;
		}
	}
	cout<<"\n > String in upper case : "<<st;
	return;
}

void stringg::lcase()		//Definition off lower case function
{
	int i=0;

	cout<<"\n > Enter string which you want in lower case : ";
	cin>>st;

	while(st[i]!='\0')
	{
		if(st[i]>='A' && st[i]<='Z')
		{
			st[i]=st[i]+32;
			i++;
		}
		else
		{
			i++;
		}
	}
	cout<<"\n > String in lower case : "<<st;
	return;
}
void stringg::cpy()		//Definition of copy function
{
	int i=0;
	char st1[20];
	cout<<"\n > Enter string witch you want to copy : ";
	cin>>st;

	while(st[i] != '\0')
	{
		st1[i]=st[i];
		i++;
	}
	st1[i]='\0';

	cout<<"\n > Copy string : "<<st1;
}

void stringg::cmp()		//Definition of comparison function
{
	char tst[20];
	int i=0,diff=0;


	cout<<"\n > Enter the two string which you want to compare : ";
	cin>>st>>tst;

	while(st[i]!='\0')
	{
		if(st[i]!=tst[i])
		{
			diff=st[i]-tst[i];	//counting difference
			cout<<"\n > Difference : "<<diff;
			return;
		}
		else
		{
			i++;
		}
	}
	cout<<"\n > \" "<<st<<" \" and \" "<<tst<<" \" are same strings. ";
	return;
}

void stringg::con()		//Definition of concatenation function
{
	char st1[20],st2[10];
	int i=0,j=0;

	cout<<"\n > Enter the two string witch you want to concatenate : ";
	cin>>st1>>st2;

	//cout<<"\n > Before Concatenation of string : "<<st;
	while(st1[i]!='\0')
	{
		i++;
	}

	while(st2[j]!='\0')		//concatenating string 2
	{
		st1[i]=st2[j];
		i++;
		j++;
	}

	st1[i]='\0';
	cout<<"\n > After Concatenation of string : "<<st1;
}

void stringg::rev()		//Definition of reverse function
{
	char temp,s[15];
	int i=0,l=0;

	cout<<"\n > Enter the string which you want to reverse : ";
	cin>>s;

	//cout<<"\n > Before reverse the string : "<<str;

	while(s[i] != '\0')
	{
		i++;
		l++;	// shifting to end of the string
	}

	i=0;
	while(i <= l/2)		//reverse the string
	{
		temp=s[i];
		s[i]=s[l-1];
		s[l-1]=temp;

		i++;
		l--;
	}
	cout<<"\n > After reverse the string : "<<s;
}

int stringg::pelin()		//Definition of palindrome function
{
	int i=0,j=0,l=0;
	string s,ss;
	char temp;

	cout<<"\n > Enter your string : ";
	cin>>s;

	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	//cout<<"\n > s string length : "<<l;

	ss=s;		//Dereference the string

	j=0;
	for(j=0;j<=l/2;l--,j++)		//reverse the dereference string
	{
		temp=ss[j];
		ss[j]=ss[l-1];
		ss[l-1]=temp;

		j++;
		l--;
	}

	i=0;
	do
	{
		if(ss[i]!=s[i])			// comparing reverse dereference string with original
		{
			return 1;
		}
		else
		{
			i++;
		}
	}while(s[i] != '\0');

	return 0;
}

int main()
{
	stringg s1;
	int temp;
	char ch;



	do
		{
			cout<<"\n\n\n > =============== * MENU * =============== \n\n";
			cout<<"\n a. Length of string ";
			cout<<"\n b. Upper case ";
			cout<<"\n c. Lower case ";
			cout<<"\n d. Comparison ";
			cout<<"\n e. Copy ";
			cout<<"\n f. Concatenation ";
			cout<<"\n g. Reverse ";
			cout<<"\n h. Palindrome ";
			cout<<"\n i. Exit ";


			cout<<"\n > Enter your choice : ";
			cin>>ch;

			switch(ch)		//switch case for menu driven
			{
			case 'a':
				s1.los();	//calling length function
				break;
			case 'b':
				s1.ucase();		//calling upper	case function
				break;
			case 'c':
				s1.lcase();		//calling lower case function
				break;
			case 'd':
				s1.cmp();		//calling comparison function
				break;
			case 'e':
				s1.cpy();		//calling copy function
				break;
			case 'f':
				s1.con();		//calling concatenation function
				break;
			case 'g':
				s1.rev();		//calling reverse function
				break;
			case 'h':
				temp=s1.pelin();	//return 0 = for yes and 1 = for no

				//cout<<"temp : "<<temp;
				if(temp==0)
				{
					cout<<"\n > It is palindrome .";
				}
				else
				{
					cout<<"\n > It not palindrome .";
				}
				break;
			case 'i':
				exit(0);		//exit
			}

		}while(ch != 'i');


	return 0;
}


