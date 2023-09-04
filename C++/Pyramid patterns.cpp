#include<iostream>
using namespace std;
int main()
{
	int n,j,s,i;
	cout<<"Pyramid pattern: ";
	cout<<"\nEnter n value:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<((2*i)+1);j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"Efficient pyramid pattern\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+i;j++)
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
	cout<<"Pyramiddd\n";
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<i+1;j++)
		{
			cout<<" *  ";
		}
		cout<<"\n";
	}
	cout<<"ooooEfficient Pyramiddd\n";
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
				cout<<" *  ";
			}
		}
		cout<<"\n";
	} 
	cout<<"flipedddd - Pyramiddd\n";
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<n-i;j++)
		{
			cout<<" *  ";
		}
		cout<<"\n";
	}
	cout<<"oooooEfficient - flipedddd - Pyramiddd\n";
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
				cout<<"q*vo";
			}
		}
		cout<<"\n";
	}
	cout<<"flipedddd1 - Pyramiddd\n";
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			cout<<"  ";
		}
		for(j=0;j<(2*(n-i)-1);j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"ooooefficient odd - flipedddd1 - Pyramiddd\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<((2*n)-i-1);j++)
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
}
