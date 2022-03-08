//Example from website..
#include <iostream>  
using namespace std;  
class Student 
	{  
		public:  
       int roll_no;     
       string name;  
       float marks;  
       Student(int x, string y, float z)    
        {    
            this->roll_no = x;    
            this->name = y;    
            this->marks = z;   
        }    
       void show()    
        {    
         cout<<"Student Name "<<roll_no<<endl;
		 cout<<"Student Roll "<<name<<endl;
		 cout<<"Student Marks "<<marks<<endl;    
        }    
};  
int main(void) {  
    Student stu =Student(102, "Shishir",90);  
    stu.show();    
    return 0;  
}  
