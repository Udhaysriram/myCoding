#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int reg,tam,eng,mat,sci,soc,tot,per;
		student()
		{
			cout<<"Alpha web academy";
		}
		void getdata()
		{
			cout<<"\nEnter your name: ";
			cin>>name;
			cout<<"Enter your Reg no: ";
			cin>>reg;
			cout<<"\nEnter subject wise marks in the order (TAM,ENG,MAT,SCI,SOC): \n";
			cin>>tam;
			cin>>eng;
			cin>>mat;
			cin>>sci;
			cin>>soc;
		}
		
		void cal()
		{
			tot=tam+eng+mat+sci+soc;
			per=tot/5;
			if(tam<35||eng<35||mat<35||sci<35||soc<35)
			{
				cout<<".........FAIL........\n\n";
			}
			else
			{
				cout<<"............PASS..............\n\n";
				if(tot>=450)
				{
					cout<<"Your grade is A";
				}	
				else if(tot>=400)
				{
					cout<<"Your grade is B";
				}
				else if(tot>=350)
				{
					cout<<"Your grade is C";
				}
				else if(tot>=300)
				{
					cout<<"Your grade is D";
				}
				else
				{
					cout<<"Your grade is E";
				}
			}
		}
		
		void display()
		{
			cout<<"\nYour Name = "<<name;
			cout<<"\nYour Reg no = "<<reg;
			cout<<"\nYour Total marks = "<<tot;
			cout<<"\nYour Total percentage = "<<per<<"%";
		}
		
		~student()
		{
			cout<<"memory cleared";
		}
		
};
int main()
{
	student s1,s2;
	/*s1.getdata();
	s1.cal();
	cout<<"\n\n....Enter for next student.....\n\n";
	s2.getdata();
	s2.cal();
	s1.display();
	s2.display();*/
	return 0;
}





















/*      
constructor - special number function
class name is assigned for function name     
it have no return type
it take the class name - constructor
when object created the constructor started functioning
destructor used to destroy the constructod memory
constructor used to efficient use of memory - a single time using code can be placed in constructor so it useed to ru one tiime 
    */
