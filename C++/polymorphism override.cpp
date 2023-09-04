//compile time and run time are the two types of polymophism
// runtime - method overriding 
//occurs inheritance only
#include<iostream>
using namespace std;
class RBI
{
	public:

		void display()
		{
			cout<<"LOAN INTREST: 7%";
		}
		
};
class SBI:public RBI
{
	public:
		
		void display()
		{
			cout<<"LOAN INTREST: 10% ";
		
		}
		
};
class HDFC: public RBI
{
	public:
		
		void display()
		{
			cout<<"LOAN INTREST: 19% ";
		
		}
		
};
int main()
{
	SBI s;
	HDFC h;
	s.display();
	h.display();
	return 0;
}

