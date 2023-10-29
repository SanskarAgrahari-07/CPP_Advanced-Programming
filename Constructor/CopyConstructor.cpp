//Consider a class rectangle with members length and breadth. Find the area of rectangle using the function find_area. Use default constructor to initialize members with value zero. Use parameterized constructor to initialize members with value 5 and 7 as length and breadth respectively. Use copy constructor and copy the value of an object to another object. Find area of all the rectangle objects.
#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	public:
	void area();
	rectangle(void)
	{
		length=0;
		breadth=0;
	}
	rectangle(int l, int b)
	{
		length=l;
		breadth=b;
	}
	rectangle(rectangle &a1)
	{
		length=a1.length;
		breadth=a1.breadth;
		cout<<length<<endl;
	}
	
	
};
void rectangle::area()
{
	cout<<"The area of the rectangle is "<<length*breadth<<endl;
}
int main()
{
	rectangle r1(5,7);
	rectangle r2(r1);
	r2.area();
	return 0;
}
	
