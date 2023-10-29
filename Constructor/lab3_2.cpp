#include<iostream>
using namespace std;
class student
{	
	char reg_no[20];
	float m1,m2,m3;
	public:
	void read()
	{
		cout<<"Enter the marks of first subject"<<endl;
		cin>>m1;
		cout<<"Enter the marks of second subject"<<endl;
		cin>>m2;
		cout<<"Enter the marks of third subject"<<endl;
		cin>>m3;
	}
	void print_sum()
	{
		float sum= m1+m2+m3;
		cout<<"The sum of the three subjects is "<<sum<<endl;
	}
	void print_avg()
	{
		float avg=(m1+m2+m3)/3;
		cout<<"The average of the three subjects is "<<avg<<endl;
	}
};
int main()
{
	student Student;
	float m1,m2,m3;
	Student.read();
	Student.print_sum();
	Student.print_avg();
}
	
	
