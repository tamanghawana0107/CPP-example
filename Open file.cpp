//Open a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj1;
	obj1.open("D:\ KIST.txt",ios::in);
	if(!obj1)
	{
		cout<<"File not created!!!";
	}
	else
	{
		char ch;
		while(!obj1.eof())
		{
			obj1>>ch;
			cout<<ch;
		}
		obj1.close();
	}
	return 0;
}
