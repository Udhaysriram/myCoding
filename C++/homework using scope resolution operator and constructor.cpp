aa/* employee payroll calculation - company name.company adress, - const
getdata - name age sal des city
payroll - declare only
payroll hra 30 da 12  esi 7 pf 20     hra+da - (esi + pf)
disp
*/

#include<iostream>
using namespace std;
class employee
{
	public:
		char name[],comp[],add[100],des[100],city[100];
		int age,sal,net,hra,da,esi,pf,tot,k;
		
		employee()
		{
			cout<<"Enter the Company name: ";
			cin>>comp;
			cout<<"Enter the company  location: ";
			cin>>add;
		}
		void getdata()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your location: ";
			cin>>city;
			cout<<"Enter your designation: ";
			cin>>des;
			cout<<"Enter your age: ";
			cin>>age;
			cout<<"Enter your current salary: ";
			cin>>sal;
			
		}
		void payroll();
		
		void display()
		{
			cout<<"your total sal is :"<<tot;
		}
		~employee()
		{
			cout<<"\n....Memory Cleared...";
		}
};
void employee::payroll()
{
			k=sal/100;
			hra=k*30;
			da=k*12;
			esi=k*7;
			pf=k*20;
			tot=hra+da+sal-esi-pf;
}
int main()
{
	employee e1;
	e1.getdata();
	e1.payroll();
	e1.display();
	return 0;
}
