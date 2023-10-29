#include<iostream>
using namespace std;
int max(int A[], int n);
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
	int d=max(a,n);
	cout<<"The maximum element of the array is "<<d<<"\n";
	return 0;
}

int max(int A[], int n)
{
	int max=A[0],i;
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		max=A[i];
	}
	return max;
}
