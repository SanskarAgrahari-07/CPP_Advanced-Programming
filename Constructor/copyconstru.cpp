#include<iostream>
#include<string.h>
using namespace std;

class student {
	int no;
	string name;
	int age;
	public:
	student(int n, string Name, int old)
	{
		no = n;
		name = Name;
		age = old;
	}
	student(student &a1)
	{
		no = a1.no;
		name = a1.name;
		age = a1.age;
	}
	void display() {
	cout<<"The details are:"<<endl<<no<<endl<<name<<endl<<age<<endl;
	}
};
int main() {
	student s1(100,"Sanskar",20);
	s1.display();
	student s2(s1);
	s2.display();
	return 0;
}
