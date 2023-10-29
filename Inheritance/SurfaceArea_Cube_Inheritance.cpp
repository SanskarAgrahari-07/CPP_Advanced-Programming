//Design a class name Square that defines a square geometric shape. The class must have a data member named side that defines the length of each side. Then define two member functions, Find_Peri and Find_Area, to find the perimeter and area of the square shape. Now define a Cube that defines a cubic shape and inherits from the Square class. The class Cube needs no new data members, but it needs the member functions Find_surfaceArea_cube and Find_peri_cube. With the help of base class fns find the area and perimeter of cube. Provide the appropriate constructors and destructors for both classes.

#include<iostream>
#include<math.h>
using namespace std;
 class Square {
 	protected:
 	int side;
 	public:
 	Square() {
 		cout<<"Enter the length of the side"<<endl;
 		cin>>side;
 	}
 	void peri() {
 		cout<<"The perimeter of the square is "<< 4*side <<endl;
 	}
 	void area() {
 		cout<<"The area of the square is "<< pow(side,2)<<endl;
 	}
 };
 class Cube:public Square {
 	public:
 	void surface_Area() {
 		cout<<"The surface area of cube is "<<6*(pow(side,2))<<endl;
 	}
 	void vol() {
 		cout<<"The volume of cube is "<<pow(side,3)<<endl;
 	}
 };
 int main() {
 	//Square s1;
 	Cube c1;
 	c1.peri();
 	c1.area();
 	c1.surface_Area();
 	c1.vol();
 }
 	
 	
 	
