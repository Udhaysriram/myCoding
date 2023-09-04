#include<iostream>
using namespace std;
class details
{
	public:
		int id,sal;
		int hra,da,pf,esi,k,tot;
		string name,desig,city;
		void getdata()
		{
			cout<<"\nEnter employee name: ";
			cin>>name;
			cout<<"Enter your ID: ";
			cin>>id;
			cout<<"Enter your Designation: ";
			cin>>desig;
			cout<<"Enter city: ";
			cin>>city;
			cout<<"Enter salary: ";
			cin>>sal;
		}
};
class manager : public details
{
	public:
		void cal()
		{
			k=sal/100;
			hra=k*5;
			pf=k*20;
			esi=k*15;
			da=k*10;
			tot=sal+da+hra-pf-esi;
			cout<<"\nManager salary is : ";
			cout<<tot;
			cout<<"\n";
		}
};
class employee : public details      // 2 child class and one parent class is there
{
	public:
		void disp()
		{
			k=sal/100;
			hra=k*5;
			da=k*5;
			tot=sal+da+hra;
			cout<<"\nEmployee salaray is : ";
			cout<<tot;
		}
	
};
int main()
{
	manager d;
	d.getdata();
	d.cal();
	employee e;
	e.getdata();
	e.disp();
	return 0;
}  .
