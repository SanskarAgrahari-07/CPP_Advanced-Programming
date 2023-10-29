#include<iostream>
using namespace std;
int search(int A[], int n);
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
	int d=search(a,n);
	cout<<"The location of element of the array is "<<d<<"\n";
	return 0;
}

int search(int A[], int n)
{
	int key,i;
	cout<<"Enter the key element\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		break;
		
	}
	return i+1;
}
