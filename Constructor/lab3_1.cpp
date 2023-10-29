#include<iostream>
using namespace std;
class student
{	
	public:
	int age;
	int roll_no;
};
int main()
{
	student Student;
	cout<<"Enter the roll_no"<<endl;
	cin>>Student.roll_no;
	cout<<"Enter your age"<<endl;
	cin>>Student.age;
}
