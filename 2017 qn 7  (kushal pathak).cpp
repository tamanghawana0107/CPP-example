#include<iostream>
#include<cmath>
using namespace std;
class account{
	protected:
		char cust_name[20];
		int acc_no;
		public:
		void cust_info(){
			cout<<"Enter Customer Name: ";
			cin>>cust_name;
			cout<<endl;
			cout<<"Enter Customer Account Number: ";
			cin>>acc_no;
		}
		void display(){
			cout<<"Customer Name is "<<cust_name<<endl;
			cout<<"Customer Account Number is "<<acc_no<<endl;
		}
};
class savings_account: public account{
	public:
		float p,t,r;
		float amt;
		void input(){
			cout<<"Enter Principal & Time to calculate Compound Interest: ";
			cin>>p>>t;
			cout<<endl;
		}
		float calculation(){
			r=10;
			amt= p*pow((1+r/100),t);
			return amt;
		}
};
class current_account: public account{
	public:
		float pr,tm,ra;
		float SI;
		void input1(){
			cout<<"Enter Principal & Time to calculate Simple Interest: ";
			cin>>pr>>tm;
			cout<<endl;
		}
		float calculation1(){
			ra=5;
			SI=(pr* tm * ra)/100;
			return SI;
		}
};
int main()
{
	int x;
	account obj1;
	savings_account obj2;
	current_account obj3;
	obj1.cust_info();
	cout<<"***** ENTER YOUR CHOICE *****"<<endl;
	cout<<"\n 1) Savings Account "<<endl;
	cout<<"\n 2) Current Account "<<endl;
	top:
	cout<<"Please Enter The Account You Want To Make ";
	cin>>x;
	if(x!=1 && x!=2)
	{
		cout<<"Error Choosing Option. Please Enter The Number 1 or 2";
		goto top;
	}
	switch (x){
		case 1:
			obj2.input();
			obj1.display();
			cout<<endl;
			cout<<"The Compound Interest is "<<obj2.calculation();
			cout<<endl;
			break;
			case 2:
			obj3.input1();
			obj1.display();
			cout<<endl;
			cout<<"The Simple Interest is "<<obj3.calculation1();
			cout<<endl;
			break;
			default:
				break;
	}
	return 0;
}
