#include<iostream>
using namespace std;
int main()
{
	string str;
	int count=0,i;
	cout<<"Enter the string"<<endl;
	cin>>str;
	for(i=0; i<'\0';i++)
		count++;
	cout<<"The length of the string is "<<count<<endl;
	return 0;
}
