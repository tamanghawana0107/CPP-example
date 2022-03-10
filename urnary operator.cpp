//Example of unary operator overloading
#include<iostream>
using namespace std;
class Count
{
	private:
		int value;
		public:
			Count():value(10){}
			void operator ++()
			{
				++value;
			}
			void display()
			{
				cout<<"Count: "<<value<<endl;
			}
};
int main()
{
	Count count1;
	++count1;
	count1.display();
	return 0;
}
