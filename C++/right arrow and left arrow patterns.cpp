#include<iostream>
using namespace std;
int main()
{
	cout<<"space ilatha aroow pattern / left arrow pattern \n";
	int n,i,j,l,s;
	cout<<"Enter the n value: ";
	cin>>n;
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(j=0;j<l+1;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"Next Pattern -  right arrow pattern\n";
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(s=0;s<n-l;s++)
			cout<<"  ";
		for(j=0;j<l+1;j++)
			cout<<"* ";
		cout<<"\n";
	}
	cout<<"Efficient pattern of right arrow pattern";
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=i;
		for(j=0;j<n+1;j++)
		{
			if(j<n-l)
				cout<<"  ";  //---------------->       // 2 spaces vital athu right arrow pattern
			else                                      // 1 space irunthal athu UDUKKAI pattern aga marummmm..!
				cout<<"* ";
		}
		cout<<"\n";
	}
}
