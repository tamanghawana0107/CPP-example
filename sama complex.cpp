//Add two complex number of two different classes//
#include<iostream>
using namespace std;
class B;
class A
{
	int nornum1,inum1;

	public:
		void input()
		{
			cout<<"Enter the first real number"<<endl;
			cin>>nornum1;
			cout<<"Enter the first imaginary number"<<endl;
			cin>>inum1;
		}
		friend void add(A,B);
};
class B
{
	int nornum2,inum2;
	public:
		void details()
		{
			cout<<"Enter the second real number"<<endl;
			cin>>nornum2;
			cout<<"Enter the second imaginary number"<<endl;
			cin>>inum2;
		}
		friend void add(A,B);
};
void add (A c,B d)
{
	int sumnor,sumi;
	sumnor=c.nornum1+d.nornum2;
	sumi=c.inum1+d.inum2;
	cout<<sumnor<<"+"<<sumi<<"i";	
}
int main()
{
	A a;
	B b;
	a.input();
	b.details();
	add(a,b);
	return 0;
}
