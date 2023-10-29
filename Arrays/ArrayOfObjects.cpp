//Create a class called 'EMPLOYEE' that has EMPCODE, EMPNAME and Annunal_salary as data members. Include member function getdata( ) to input data , member function display( ) to output data. Write a main function to create EMP, an array of EMPLOYEE objects. Accept and display the details of N employees.
#include<iostream>
using namespace std;
class employee
{	
	int emp_code;
	char emp_name[20];
	int salary;
	public:
	void getdata();
	void display();
};
void employee::getdata()
{
	cout<<"Enter your employee code"<<endl;
	cin>>emp_code;
	cout<<"Enter your name"<<endl;
	cin>>emp_name;
	cout<<"Enter your annual salary"<<endl;
	cin>>salary;
}
void employee::display()
{
	cout<<"Your employee code is"<<emp_code<<endl;
	cout<<"Your name is "<<emp_name<<endl;
	cout<<"Your annual salary is "<<salary<<endl;
}

int main()
{
	
	int n;
	employee empl[n];
	cout<<"Enter the number of employees"<< n<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Employee No."<<i+1<<endl;
		empl[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"The details of Employee No."<<i+1<<"is"<<endl;
		empl[i].display();
	}
}
	
