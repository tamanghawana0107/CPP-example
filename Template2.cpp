//WAP for the template.....
#include<iostream>
using namespace std;
template<typename R> R myCalc(R x,R y)
{
	return (x*y);
	
}
int main()
{
	int x,y;
	cout<<"Enter the first integer value :";
	cin>>x;
	cout<<"\nEnter the second integer value:";
	cin>>y;
	cout<<myCalc<int>(x,y)<<endl;
	
	return 0;
}
