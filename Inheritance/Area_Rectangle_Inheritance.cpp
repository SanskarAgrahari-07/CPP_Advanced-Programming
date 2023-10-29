//Define a base class Shape with data members length and breadth and member function input(). And derive a class rectangle from the base class which has data members area and member ///function findarea() and display ().

#include<iostream>
using namespace std;

class Shape {
	protected:
	int length;
	int breadth;
	public:
	void input() {
		cout<<"Enter the length of rectangle"<<endl;
		cin>>length;
		cout<<"Enter the breadth of rectangle"<<endl;
		cin>>breadth;
	}
};
class Rectangle:public Shape {
	int area;
	public:
	int findArea() {
		area = length * breadth;
		return area;
	}
	void disp() {
	cout<<"The area of rectangle is "<<findArea()<<endl;
	}
};
int main() {
	Rectangle r1;
	r1.input();
	r1.disp();
}
