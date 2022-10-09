/*
 * q16.cpp
 *
 *  Created on: 24-Jun-2022
 *      Author: root
 */

#include<iostream>

using namespace std;


void insert(int *,int);
void insert(int *p,int s)
{
	int i;

	for(i=0;i<s;i++)
	{
		cout<<"\n Enter value for "<<i+1<<" element : ";
		cin>>*(p+i);
	}
}

void display(int [],int);
void display(int a[],int s)
{

	cout<<"\n\n > Your array is : ";

	int i;

	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
}
void bubblesort(int *,int);
void bubblesort(int *p,int s)
{
	int i=0,j=0,temp=0;

	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(*(p+j)<*(p+i))
			{
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;
			}
		}
	}

	cout<<"\n > Array sorted using Bubble Sort method.";
}
int main()
{
	char o;
	int c=0;
	int a[10],*p;

	p = &a[0];

	do
	{
		cout<<"\n\n\n              ***** MENU *****              \n\n\n";
		cout<<"\n a. Accept elements of an array ";
		cout<<"\n b. Display elements of an array ";
		cout<<"\n c. Sort the array using insertion sort method ";
		cout<<"\n d. Sort the array using selection sort method ";
		cout<<"\n e. Sort the array using bubble sort method ";

		cout<<"\n\n > enter any option : ";
		cin>>o;
		switch(o)
		{

		case 'a':
			insert(p,10);
			break;

		case 'b':
			display(a,10);
			break;

		case 'c':
			cout<<"\n c. Sort the array using insertion sort method ";
			break;

		case 'd':
			cout<<"\n d. Sort the array using selection sort method ";
			break;

		case 'e':
			bubblesort(p,10);
			break;

		default:
			cout<<"\n Invalid option ";
			break;

		};
		cout<<"\n\n > Do you want to continue (y=0/n=1) ? :";
		cin>>c;
	}while(c == 0);

	return 0;
}


