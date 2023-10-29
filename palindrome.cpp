#include<iostream>
using namespace std;
int palin(int a);
int main()
{	
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int d=palin(n);
	d==1?cout<<"The given number is a palindrome number.\n":cout<<"The given number is not a palindrome number.\n";
	return 0;
}

int palin(int a)
{
	int rem,rev=0,d=a;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	return rev==d?1:0;
}
