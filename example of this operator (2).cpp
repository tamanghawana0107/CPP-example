//Second example from website 
#include<iostream>
using namespace std;
class loc_mem_same
{
private:
int i;
float f;
char c;
public:
void name_var (int i, float f,char c)
{
this->i = i;
this->f = f;
this->c = c;
}
void display_values()
{
cout << "The integer value is = " << i << endl;
cout << "The float value is = " << f << endl;
cout << "The character value is = " << c << endl;
}
};
int main()
{
loc_mem_same inst;
int i = 20;
float f = 2.05890;
char c = 'E';
cout << "The display of values which have both local variable and data member have same name and using this pointer" << endl;
inst.name_var(i,f,c);
inst.display_values();
return 0;
}
