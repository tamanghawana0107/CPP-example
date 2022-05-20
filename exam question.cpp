//WAP to enter name ,id and salary of 5 employees and find employees with highest salary. USE oop concept.
#include<iostream>
using namespace std;
class emp{
	int id;
	string name;
	public:
	int salary[5];
	void get_details(int x,string a)
	{
		id=x;
		name=a;
	}
	void highestSalary()
	{
		int j=0,k=0,temp=0;
		for(j=0;j<5;j++)
		{
			for(k=j+1;k<5;k++)
			{
				if(salary[k]<salary[j])
				{
					temp=salary[j];
					salary[j]=salary[k];
					salary[k]=temp;
				}
			}
		}
	}
 friend	void display();
	{
		
			cout<<"\nThe details of the employee having highest salary is::";
			cout<<"\nID of the employee :"<<id;
			cout<<"\nName of the employee :"<<name;
			cout<<"\nHighest Salary of the employee";
		

	}
};
void display(emp E)
	{
		
			cout<<"\nThe details of the employee having highest salary is::";
			cout<<"\nID of the employee :"<<E.id;
			cout<<"\nName of the employee :"<<E.name;
			cout<<"\nHighest Salary of the employee"<<E.salary;
		

	}
int main()
{
	emp obj[5];
	int b,i=0;
	string c;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the details of the" << i+1 <<"member ::"<<endl;
		cout<<"\nEnter the id of the "<<i+1<<"employee :"<<endl;
		cin>>b;
		fflush(stdin);
		cout<<"\nEnter the name of the "<<i+1<<"employee :"<<endl;
		cin>>c;
		fflush(stdin);
		cout<<"\nEnter the salary of the "<<i+1<<"employee :"<<endl;
		cin>>obj[i].salary;
		fflush(stdin);
		obj[i].get_details(b,c);
	}
	
	
	
}
