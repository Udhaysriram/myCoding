#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"\nPattern 1\n";
	cout<<"Enter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\nPattern 2\n";
	cout<<"Hollow square\n";
	cout<<"Enter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

