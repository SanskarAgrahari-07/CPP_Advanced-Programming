//Create a class point with members X and Y. Use parameterized constructor to initialize the class members. Use copy constructor to coy the value of point P1 to Point P2. Include function calculate_distance which finds the distance between two points P1 and P3.
#include <iostream>
#include<cmath>
using namespace std;
class point
{
	int x,y;
	public:
	void cal_distance();
	point(int a, int b)
	{
		x=a;
		y=b;
	}
	point(point &p1)
	{
		x=p1.x;
		y=p1.y;
	}
};
void point::cal_distance()
{
	int d = sqrt(pow(x,2)+pow(y,2));
	cout<<"The distance between two points is "<<d<<endl;
}
int main()
{
	int n,m;
	cout<<"enter the first point"<<endl;
	cin>>n;
	cout<<"enter the second point"<<endl;
	cin>>m;
	point p1(n,m);
	point p2(p1);
	p2.cal_distance();
	return 0;
}
	
