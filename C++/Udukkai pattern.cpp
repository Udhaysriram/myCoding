#include<iostream>
using namespace std;
int main()
{
	int n,i,s,j,l;
	cout<<"Udukkai Patterns\n";
	cout<<"Enter n value: ";
	cin>>n;
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(s=0;s<n-l;s++)
		{
			cout<<" ";
		}
		for(j=0;j<l+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<" ooooo udukkai patterns efficent: \n";
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(j=0;j<n+1;j++)
		{
			if(j<n-l)
				cout<<" ";
			else
				cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
