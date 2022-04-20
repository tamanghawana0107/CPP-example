//WAP to do sorting using function template...
#include<iostream>
using namespace std;
template<typename R>
void sor(R num[])
{
	R a,b,c;
	for(a=0;a<5;a++)
	{
		for(b=a+1;b<5;b++)
		{
			if (num[b]<num[a])
			{
				c=num[a];
				num[a]=num[b];
				num[b]=c;
			}
		}
	}
	cout<<"ascending order";
	for(a=0;a<5;a++)
	{
		cout<<num[a]<<endl;
	}
	
	
}
int main()
{
	int num[5],i=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the numbers :";
		cin>>num[i];
		
	}
	sor<int>(num);	
	return 0;
}
