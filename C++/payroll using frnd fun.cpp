#include<iostream>
using namespace std;
class B;
class A
{
	public:
	int age,sal;
	string name,city;
	void getdata()
	{
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your city: ";
	cin>>city;
	cout<<"Enter your sal: ";
	cin>>sal;
	}
	friend void netsal(A,B);
};
class B
{
	public:
		double hra=0.2,da=0.12,esi=0.5,pf=0.2,net;
	void percent()
	{
		net=hra+da-pf-esi;                     //hra da get and cal net
		cout<<".......\nu"<<net;
	}
	friend void netsal(A,B);
};
void netsal(A a1, B b1)
{
	
	cout<<a1.sal+b1.net;
}
int main()
{
	A a1;
	B b1;
	a1.getdata();
	b1.percent();

	netsal (a1,b1);
	return 0;
}








