#include<iostream>
using namespace std;
class Triangle
{
	int s1,s2,s3;
	public:
	void read(int a, int b, int c);
	void area();
};
	void Triangle::read(int a, int b,int c)
	{
		s1=a;
		s2=b;
		s3=c;
	}
	void Triangle::area()
	{
		
		int s=(s1+s2+s3)/2;
		int area=(s*(s-s1)*(s-s2)*(s-s3))^(1/2);
		cout<<"The area of the triangle is "<<area<<endl;
		cout<<"The perimeter of the triangle is "<<s*2<<endl;
	}
int main() 
{
	Triangle tri;
	tri.read(3,4,5);
	tri.area();
}
		


