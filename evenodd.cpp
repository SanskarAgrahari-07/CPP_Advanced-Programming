#include<iostream>
using namespace std;
int evenodd(int a);
int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int d =evenodd(n);
	d==1?cout<<"The number is even\n":d==2?cout<<"The number is odd\n":cout<<"The number is ZERO\n";
	return 0;
}

int evenodd(int a)
{
	return a%2==0&&a!=0?1:a%2!=0?2:3;
}
	
