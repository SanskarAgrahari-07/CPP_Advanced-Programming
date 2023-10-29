#include<iostream>
using namespace std;
class Employee
{
    string emp_id;
    string emp_name;
    float salary;
    public:
    void accept();
    void display();
};
void Employee::accept()
{
    cout<<"Enter your employee Id"<<endl;
    cin>>emp_id;
    cout<<"Enter your name"<<endl;
    cin>>emp_name;
    cout<<"Enter your salary"<<endl;
    cin>>salary;
}
void Employee::display()
{
    float DA = 0.1 * salary;
    float I_tax = 0.1 * salary;
    int HRA = 1200;
    cout<<endl<<"**Payslip of the Employee**"<<endl;
    cout<<" Employee Id = "<<emp_id<<endl<<" Employee Name = "<<emp_name<<endl
    <<" Total Salary = Rs."<<salary<<endl<<" Dearness Allowance = Rs."<<DA<<endl
    <<" Total HRA = Rs."<<HRA<<endl<<" Total I_Tax Amount = Rs."<<I_tax<<endl;
    
}
int main()
{
    Employee e1;
    e1.accept();
    e1.display();
    return 0;
}
