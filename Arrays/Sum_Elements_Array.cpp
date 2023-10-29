#include<iostream>
using namespace std;
int sum(int A[], int n);
int main()
{	
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n],i;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	{	
		cin>>a[i];
	}
	int d=sum(a,n);
	cout<<"The sum of the elements of the array is "<<d<<"\n";
	return 0;
}

int sum(int A[], int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=A[i];
	}
	return sum;
}
