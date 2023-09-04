#include<iostream>
using namespace std;
namespace display
{
	void hra(int x)
	{
		int h=((x/100)*12);
		cout<<"\nHRA : "<<h;
	}
	void da(int x)
	{
		int d=((x/100)*15);
		cout<<"\nDA : "<<d;
	}
	void esi(int x)
	{
		 int e=((x/100)*5);
		cout<<"\nESI : "<<e;
	}
	void pf(int x)
	{
		int p=((x/100)*8);
		cout<<"\nPF : "<<p;
	}
		
}
using namespace display;
int main()
{
	int k,sal,age,x,net,h,e,d,p;
	string name,city;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter employee ID: ";
	cin>>k;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your city: ";
	cin>>city;
	cout<<"Enter your Salary: ";
	cin>>sal;
	hra(sal);
	da(sal);
	esi(sal);
	pf(sal);
	net=sal+d+h-e-p;
	cout<<"\nYour net salary is : ";
	cout<<net;
	return 0;
}
