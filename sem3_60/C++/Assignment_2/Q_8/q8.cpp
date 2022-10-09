/*
 * q8.cpp
 *
 *  Created on: 23-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

int size=0;
class book
{
	int b_id[100];
	string b_name[100];
	string a_name[100];
	int price[100];
	int d[100];
	int m[100];
	int y[100];
	int avl[100];



public:

	void input()
	{
		int n;
		cout<<"\n > Enter the number of book you want to enter : ";
		cin>>n;


		for(int i=size;i<size+n;i++)
		{
			cout<<"\n > Enter the details of Book";

			cout<<"\n > Enter the book id : ";
			cin>>b_id[i];

			cout<<"\n > Enter the name of the book : ";
			cin>>b_name[i];

			cout<<"\n > Enter the name of the author : ";
			cin>>a_name[i];

			cout<<"\n > Price of book : ";
			cin>>price[i];

			cout<<"\n > Enter the Publish date : ";
			cin>>d[i]>>m[i]>>y[i];

			cout<<"\n > Book is available or not (y=0/n=1) : ";
			cin>>avl[i];
		}
		size = size+n;

	}

	void display()
	{
		int flag=0;

		for(int i=0;i<size;i++)
		{
			if(flag==0)
			{
				cout<<"\n\n > Details of the book : \n";
				cout<<"\n Id \tName \tAuthor \tPrice \tPublish Date \tAvailable ";
				flag=1;
			}
			cout<<"\n "<<b_id[i]<<"\t"<<b_name[i]<<"\t"<<a_name[i]<<"\t\t"<<price[i]<<"\t"<<d[i]<<"/"<<m[i]<<"/"<<y[i]<<"\t"<<avl[i];
		}
		if(flag == 0)
		{
			cout<<"\n > Book not available  !!! ";
		}
	}

	void bookunder200()
	{
		int flag=0;

		for(int i=0;i<size;i++)
		{
			if(price[i]<=200)
			{
				if(flag==0)
				{
					cout<<"\n\n > Details of the book Under 200 : \n";
					cout<<"\n Id \tName \tAuthor \tPrice \tPublish Date \tAvailable ";
				}

				cout<<"\n "<<b_id[i]<<"\t"<<b_name[i]<<"\t"<<a_name[i]<<"\t\t"<<price[i]<<"\t"<<d[i]<<"/"<<m[i]<<"/"<<y[i]<<"\t"<<avl[i];

				flag=1;
			}
		}
		if(flag == 0)
		{
			cout<<"\n > Book not found !!! ";
		}
	}
	void search_author()
	{
		int flag=0;
		string tauthor;

		cout<<"\n > Enter the author name which you want to search for : ";
		cin>>tauthor;

		for(int i=0;i<size;i++)
		{
			if(a_name[i]==tauthor)
			{
				if(flag==0)
				{
					cout<<"\n\n > Details of the author "<<tauthor<<" : \n";
					cout<<"\n Id \tName \tAuthor \tPrice \tPublish Date \tAvailable ";
				}

				cout<<"\n "<<b_id[i]<<"\t"<<b_name[i]<<"\t"<<a_name[i]<<"\t\t"<<price[i]<<"\t"<<d[i]<<"/"<<m[i]<<"/"<<y[i]<<"\t"<<avl[i];

				flag=1;
			}
		}
		if(flag == 0)
		{
			cout<<"\n > Book not found !!! ";
		}
	}

	void sreach_avl_book()
	{
		int flag=0;

		for(int i=0;i<size;i++)
		{
			if(avl[i]==0)//(y=0/n=1)
			{
				if(flag==0)
				{
					cout<<"\n\n > Details of the book which are available : \n";
					cout<<"\n Id \tName \tAuthor \tPrice \tPublish Date \tAvailable ";
				}

				cout<<"\n "<<b_id[i]<<"\t"<<b_name[i]<<"\t"<<a_name[i]<<"\t\t"<<price[i]<<"\t"<<d[i]<<"/"<<m[i]<<"/"<<y[i]<<"\t"<<avl[i];

				flag=1;
			}
		}
		if(flag == 0)
		{
			cout<<"\n > Book not found !!! ";
		}
	}
};

int main()
{
	book b;

	char ch;
		do
			{
				cout<<"\n\n\n > =============== * MENU * =============== \n\n";
				cout<<"\n a. Input The Book : ";
				cout<<"\n b. Display Books : ";
				cout<<"\n c. Books Under 200 : ";
				cout<<"\n d. Search By Author : ";
				cout<<"\n e. Display Available Books : ";
				cout<<"\n f. Exit ";


				cout<<"\n > Enter your choice : ";
				cin>>ch;

				switch(ch)
				{
				case 'a':
					b.input();
					break;
				case 'b':
					b.display();
					break;
				case 'c':
					b.bookunder200();
					break;
				case 'd':
					b.search_author();
					break;
				case 'e':
					b.sreach_avl_book();
					break;
				case 'f':
					exit(0);
				}

			}while(ch != 'f');


}






