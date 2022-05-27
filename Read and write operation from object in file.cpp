#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class kist{
	public:
	int id;
	string a;
	string b;
	void details();
	void output();
	void switch_case();
};kist obj;
void kist :: details()
{
	//clrscr();
	fstream file;
	cout<<"Enter the id of the teacher :";
	cin>>obj.id;
	fflush(stdin);
	cout<<"Enter the name of the teacher :";
	getline(cin,obj.a);
	fflush(stdin);
	cout<<"Enter the position of the teacher :";
	getline(cin,obj.b);
	fflush(stdin);
	file.open("Details.dat",ios::out|ios::app);
	file.write((char *)this,sizeof(kist));
	file.close();
	getch();
	obj.switch_case();
}
void kist :: output()
{
	int temp;
	//clrscr();
	cout<<"Enter the id number you want to search:";
	cin>>temp;
	fstream file;
	file.open("Details.dat",ios::in);
	//file.seekg(0,ios::beg);
	while (file.read((char *)this,sizeof(kist)))
	{
		if(id=temp)
		{
			cout<<"\nThe id of the teacher is : "<<id;
			cout<<"\nThe name of the teacher is : "<<a;
			cout<<"\nThe position of the teacher is : "<<b;
		}
	}
	file.close();
	getch();
}
void kist :: switch_case()
{
	int i;
	cout<<"Operation you can do ::"<<endl;
	label1:
	cout<<"1.Give details"<<endl;
	cout<<"2.Search details"<<endl;
	cout<<"\nEnter your choice :";
	cin>>i;
	switch(i)
	{
		case 1:
			obj.details();
		break;
		case 2:
			obj.output();
		break;
		default:
			cout<<"Wrong choice:";
			goto label1;
	}
	
}
int main()
{
	obj.switch_case();
	return 0;
}

