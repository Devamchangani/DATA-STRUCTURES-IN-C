/*
 * ass4.cpp
 *
 *  Created on: 21-Sep-2022
 *      Author: root
 */
#include<iostream>

using namespace std;

class customer
{
protected:
int cid;
char cname[10];
public:
customer()
{
cout<<"enter customer id"<<endl;
cin>>cid;
cout<<"enter customer name"<<endl;
cin>>cname;
}
void cshow()
{
cout<<cid<<" \t"<<cname<<" "<<endl;
}
};
class item:public customer
{
protected:
int i,id[3],price[3];
char iname[5][3];
public:
void input()
{
for(i=0;i<3;i++)
{
cout<<"enter product id"<<endl;
cin>>id[i];
cout<<"enter product name"<<endl;
cin>>iname[i];
cout<<"enter product price"<<endl;
cin>>price[i];
}
}
void display()
{
for(i=0;i<3;i++)
{
cout<<id[i]<<" "<<iname[i]<<" "<<price[i]<<" "<<endl;
}
}
};

class bill:public item
{
    int total;
public:
    void show()
    {
        for(i=0;i<3;i++)
        {
            total=total+price[i];
        }
        cout<<endl;
        cout<<endl;
        cout<<"**********customer details*********"<<endl;

        cshow();
        cout<<endl;
        cout<<endl;
        cout<<"*********product details**********"<<endl;

        display();
        cout<<endl;
        cout<<endl;
        cout<<"total bill: "<<total<<endl;
    }
};
int main()
{
    bill i;
    i.input();
    i.show();
    return 0;
}

