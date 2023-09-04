#include<iostream>
using namespace std;
class details
{
	public:
		int id;
		string name,desig,city;
		void getdata()
		{
			cout<<"Enter employee name: ";
			cin>>name;
			cout<<"Enter your ID: ";
			cin>>id;
			cout<<"Enter your Designation: ";
			cin>>desig;
			cout<<"Enter city: ";
			cin>>city;
		}
};
class calculation : public details
{
	public:
		int sal,hra,da,pf,esi,k,tot;
		void cal()
		{
			cout<<"Enter salary: ";
			cin>>sal;
			k=sal/100;
			hra=k*5;
			pf=k*20;
			esi=k*15;
			da=k*10;
			tot=sal+da+hra-pf-esi;
		}
};
class display : public calculation
{
	public:
		void disp()
		{
			cout<<"\nEmployee data.....\n";
			cout<<name<<"-"<<id;
			cout<<"\nyour actual salary is : ";
			cout<<tot;
			
		}
	
};
int main()
{
	display d;
	d.getdata();
	d.cal();
	d.disp();
	return 0;
}
