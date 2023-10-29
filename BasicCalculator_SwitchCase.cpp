#include<iostream>
using namespace std;
int calc(int a, int b, char ch)
{
	switch(ch)
	{
		case '+':
		return a+b;
		break;
		
		case '-':
		if(a>b)
		return a-b;
		else
		return b-a;
		break;
		
		case '*':
		return a*b;
		break;
		
		case '/':
		return a/b;
		break;
		
		default:
		return 0;
		break;
	}
}
	
int main()
{
	int n1,n2;
	char c;
	cout<<"Enter the first number"<<endl;
	cin>>n1;
	cout<<"Enter the second number"<<endl;
	cin>>n2;
	cout<<"enter the operands"<<endl;
	cin>>c;
	int d= calc(n1,n2,c);
	if(d==0)
	cout<<"Enter a valid operands!!"<<endl;
	else
	cout<<"The required result is "<<d<<endl;
	return 0;
}
	
