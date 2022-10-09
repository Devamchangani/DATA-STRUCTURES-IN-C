/*
 * Q2.cpp
 *
 *  Created on: 16-Jul-2022
 *      Author: root
 */

#include<iostream>


using namespace std;

class Array
{
int arr[20];
int size,num;

public:
	void insert();		//for insert array element
	void display();		//for display array element
	void search();		//for searching the element array
	void sort();		//for sorting ascending array
	int summ();			//for count the sum array
	int avgg();			//for count the average array
	int max();			//for finding max array
	void swap();		//for swap the 1st and last element of array

};


void Array::insert() 	//defination of insert function
{
	int i;

	cout<<"\n >enter the size of array : ";
	cin>>size;

	for(i=0;i<size;i++)
	{
		cout<<"\n Enter the value for "<<i+1<<" element : ";
		cin>>arr[i];
	}
}

void Array::display()		//Definition of display function
{
	int i=0;

	cout<<"\n > Your Array : ";

	for(i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
}

void Array::search()		//Definition of search function
{
	int i,flag=0;

	cout<<"\n > Enter a number you  want to search : ";
	cin>>num;

	for(i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			flag=1;
			cout<<" "<<arr[i];
		}
	}
	if(flag==0)
	{
		cout<<"\n "<<num<<" is not Found !!! ";
	}
}

void Array::sort()		//Definition of sorting ascending function
{
	int i,j,temp;

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\n > Your array is sorted.";
}

int Array::summ()		//Definition of sum function
{
	int i=0,sum=0;

	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	//printf(" %d ",sum);
	return sum;
}

int Array::avgg()		//Definition of average function
{
	int sum=0;
	sum=summ();		//calling sum function

	return sum/size;
}
int Array::max()		//Definition of max function
{
	int i=0,mx=0;

	for(i=0;i<size;i++)
	{
		if(mx<arr[i])		//count max
		{
			mx=arr[i];
		}
	}
	return mx;
}

void Array::swap()		//Definition of swap function
{
	int temp;

	temp=arr[0];
	arr[0]=arr[size-1];
	arr[size-1]=temp;

	cout<<"\n > Swapped Array.";
}

int main()
{
	Array a1;

	int sum=0,avg=0,mx=0;
	char ch;

	do
		{
			cout<<"\n\n\n > =============== * MENU * =============== \n\n";
			cout<<"\n a. INSERT ";
			cout<<"\n b. DISPLAY ";
			cout<<"\n c. SEARCH ";
			cout<<"\n d. BUBBLE SORT ";
			cout<<"\n e. SUM OF ALL ELEMENT ";
			cout<<"\n f. AVERAGE OF ALL ELEMENT ";
			cout<<"\n g. FIND MAXIMUM VALUE ";
			cout<<"\n h. SWAP FIRST AND LAST ELEMENT ";
			cout<<"\n i. EXIT ";


			cout<<"\n > ENter your choice : ";
			cin>>ch;

			switch(ch)
			{
			case 'a':
				a1.insert();		//calling insert function
				break;
			case 'b':
				a1.display();		//calling display function
				break;
			case 'c':
				a1.search();		//calling search function
				break;
			case 'd':
				a1.sort();			//calling sort function
				break;
			case 'e':
				sum=a1.summ();		//calling sum function
				cout<<"\n > Sum of all element is : "<<sum;
				break;
			case 'f':
				avg=a1.avgg();		//calling average function
				cout<<"\n > Average : "<<avg;
				break;
			case 'g':
				mx=a1.max();		//calling max function
				cout<<"\n > Largest Element of array is : "<<mx;
				break;
			case 'h':
				a1.swap();			//calling swap function
				break;
			case 'i':
				exit(0);			//calling exit function
			}
		}while(ch!='i');


	return 0;
}



