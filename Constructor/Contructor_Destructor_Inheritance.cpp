//Create a Sphere class that inherits from a Circle class. 
 //Define a class named circle with one private data member: radius. Define a parameterized constructor and a destructor for the class and write member functions to find the perimeter and area of a circle using the following relationships.
//perimeter = 2 * π * radius,  area = π * radius * radius
//Define an inherited class named Sphere. Also define a parameterized constructor and a destructor for the class and write member functions to find the surface area and volume of a sphere.
//Surface area = 2 * radius * perimeter,  volume = (4 / 3) * radius * area

#include<iostream>
#include<math.h>
using namespace std;
class Circle {
	int radius;
	public:
	Circle(int i) {
		radius = i;
		cout<<"Circle Parametrized constructor"<<endl;
	}
	~Circle() {
		cout<<"Base class Object Destroyed"<<endl;
	}
	double area() {
		double ar = 3.14*(pow(radius,2));
		cout<<"The area of the circle is "<<ar<<endl;
		return ar;
	}
	double peri() {
		double p = 2*3.14*radius;
		cout<<"The perimeter of the circle is "<<p<<endl;
		return p;
	}
};
class Sphere: public Circle {
	public:
	int r;
	Sphere(int radius):Circle(radius) {
		 r = radius; 
		cout<<"Sphere parametrized constructor"<<endl;
	}
	~Sphere() {
		cout<<"Derived class object destroyed"<<endl;
	}
	double d = peri();
	double v = area();
	void Surface_Area() {
		cout<<"The surface area of sphere is "<<2 * r * d<<endl;
	}
	void vol() {
		cout<<"The volume of sphere is "<<(4/3) * r * v<<endl;
	}
};
int main() {
	int r;
	cout<<"Enter the radius "<<endl;
	cin>>r;
	Sphere s1(r);
	s1.Surface_Area();
	s1.vol();
	return 0;
}
