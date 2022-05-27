/*WAP to add two objects of a class using friend function the class consist of hour and minute as 
its data member, input(),sum() and output() as its member function [2017 1b] */

using namespace std;
class time{
    int hour;
    int minute;
    public:
    void input(int x,int y)
    {
        hour=x;
        minute=y;
    }
    friend int sum(time,time);
    friend int output(time,time);
};
int sum(time a,time b)
{
    int c,d;
    c=a.hour+b.hour;
    d=b.minute+b.minute;
    cout<<"The sum of hour is = "<<c<<endl;
    cout<<"The sum of minute is = "<<d<<endl; 
    return 0;
}
int output(time e)
{

}
int main()
{
    time obj1 ,obj2;
    int value1,value2,t,s;
    cout<<"Enter the hour =";
    cin>>value1;
    cout<<endl<<"Enter the minute =";
    cin>>value2;
    obj1.input(value1,value2);
    t=sum(obj1,obj2);
    s=output(obj1,obj2);
    return 0;
}