#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s;
	cout<<"Pattern 1 ";
	cout<<"\nEnter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<n-i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"ooooEfficient Pattern 2";
	cout<<"\nEnter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<i)
			{
				cout<<"  ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<"\n";
	}
	cout<<"Pattern 3";
	cout<<"\nEnter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<i+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"ooooEfficient Pattern 3";
	cout<<"\nEnter n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<n-i-1)
			{
				cout<<"  ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<"\n";
	}
}
