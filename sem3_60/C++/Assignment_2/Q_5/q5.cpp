/*
 * q5.cpp
 *
 *  Created on: 23-Jul-2022
 *      Author: root
 */

#include<iostream>

using namespace std;

class student
{
	int size;
	struct stud
	{
		int rollno;
		string name;
		struct marks
		{
			int sub1;
			int sub2;
			int sub3;
		}mark;
		int total;
		float per;
		char grade;
	}st[10];


public:
	 void input()
	 {
	 	cout<<"\n > Enter the number of student you want to enter : ";
	 	cin>>size;

	 	for(int i=0;i<size;i++)
	 	{
	 		cout<<"\n > Enter roll no of student : ";
	 		cin>>st[i].rollno;
	 		cout<<"\n > Enter the name of student : ";
	 		cin>>st[i].name;
	 		cout<<"\n > Enter the marks of sub1 : ";
	 		cin>>st[i].mark.sub1;
			cout<<"\n > Enter the marks of sub2 : ";
			cin>>st[i].mark.sub2;
			cout<<"\n > Enter the marks of sub3 : ";
			cin>>st[i].mark.sub3;
	 	}
	 }

	 void count_grade()
	 {
		 for(int i=0;i<size;i++)
		 {
			 	st[i].total = st[i].mark.sub1 + st[i].mark.sub2 + st[i].mark.sub3;
			 	st[i].per = (st[i].total*100)/300;

			 	if( st[i].per > 80)
				 {
					 st[i].grade='A';
				 }
			 	else
			 	{
			 		if( st[i].per > 60)
					 {
						 st[i].grade='B';
					 }
					else
					{
						if( st[i].per > 40)
						 {
							 st[i].grade='C';
						 }
						else
						{
							st[i].grade='F';
						}
					}

			 	}
		 }


	 }

	 void display()
	 {
		 cout<<"\n\n\n > Details of student : \n\n";
		 cout<<"   Roll No \t Name \t\t Marks \t\t Total \t Grade";
		 cout<<"\n \t\t\tsub1	sub2	sub3 \n";
		 for(int i=0;i<size;i++)
		 {
			 cout<<"\n    "<<st[i].rollno<<"\t\t"<<st[i].name<<"\t"<<st[i].mark.sub1<<"\t"<<st[i].mark.sub2<<"\t"<<st[i].mark.sub3<<"\t"<<st[i].total<<"\t"<<st[i].grade;
		 }
	 }

	 void rank()
	 {
		 float max=0;
		 int s;

		 for(int i=0;i<size;i++)
		 {
			 if(st[i].per>max)
			 {
				 max=st[i].per;
				 s=i;
			 }
		 }
		 cout<<"\n > Details of the student who secured 1st rank ";

		 cout<<"   Roll No \t Name \t\t Marks \t\t Total \t Grade";
		 cout<<"\n \t\t\tsub1	sub2	sub3 \n";
		 cout<<"\n    "<<st[s].rollno<<"\t\t"<<st[s].name<<"\t"<<st[s].mark.sub1<<"\t"<<st[s].mark.sub2<<"\t"<<st[s].mark.sub3<<"\t"<<st[s].total<<"\t"<<st[s].grade;

	 }

};



int main()
{
	student s1;

	s1.input();
	s1.count_grade();
	s1.display();
	s1.rank();


	return 0;
}




