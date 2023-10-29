#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int num;
	cout<<"Ebtre the number\n";
	cin>>num;
	int d = fact(num);
	cout<<"The factorial is "<<d<<"\n";
	return 0;
	
}
int fact(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

