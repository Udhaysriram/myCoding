#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Pattern 1\n";
	cout<<"Enter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\nPattern 2\n";
	cout<<"Enter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
