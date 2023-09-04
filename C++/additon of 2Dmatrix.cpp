#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cout<<"...Matrix Addition...\n";
	cout<<"Enter the no of rows: ";
	cin>>n;
	cout<<"Enter the no of columns: ";
	cin>>m;
	cout<<"Enter the elements of array A: \n";
	int a[n][m],b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
		
	}
	cout<<"Enter the elements of array B: \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	
	}
	int c[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nAddtion of two matrices...\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
