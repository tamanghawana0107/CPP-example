//WAP try,catch throw
#include<iostream>
using namespace std;
int main()
{
	int n,d,r;
	cout<<"Enter numerator and denominator:";
	cin>>n>>d;
	try{
		if(d==0)
		{
			throw d;
		}
		r=n/d;
	}
	catch(int z)
	{
		cout<<"\nException : Division by zero";
	}
	cout<<"\nDivision is "<<r;
	return 0;
}
