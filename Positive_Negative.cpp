#include<iostream>
using namespace std;
int positive(int a);
int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int d = positive(n);
	d==1?cout<<"The number is positive\n":d==2?cout<<"The number is negative\n":cout<<"The number is ZERO\n";
	return 0;
}

int positive(int a)
{
	return a>0?1:a<0?2:3;
}
