#include<iostream>
using namespace std;
class udhay
{
	public:
		string name;// member data
		void getdata()// member function
		{
			cout<<"Enter your name: ";
			cin>>name;
		}
		void display()
		{
			cout<<"your name is : "<<name;
		}
};
int main()
{
	
	udhay u1,u2,u3;
	u1.getdata();
	u2.getdata();
	u3.getdata();
	u1.display();
	u2.display();
	u3.display();
	return 0;
}
