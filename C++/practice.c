#include<stdio.h>
// display the array
void display(int a[], int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
// minimum value
int minimum(int a[],int n)
{
	int m=a[0],i;
	for(i=1;i<n;i++)
	{
		if(m>a[i])
		{
			m=a[i];
		}
	}
	return m;
}
// maximum method
int maximum(int a[],int n)
{
	int np=a[0],i;
	for(i=0;i<n;i++)
	{
		if(np<a[i])
		{
			np=a[i];
		}
	}
	return np;
}
  

int main()
{
	int n=5,i;
	int a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// function calling
	display(a,n);
	int k = minimum(a,n);
	int y = maximum(a,n);
	printf("\n\n min and max - %d and %d",k,y);
}
