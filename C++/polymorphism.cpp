//compile time and run time are the two types of polymophism
// compile time - method overloadng and operator over loading (not more useable)
// we can use same method name but differentiate in datatype
#include<iostream>
using namespace std;
class addition
{
	public:
		int a,b;
		void add()
		{
			cout<<"Enter a value: ";
			cin>>a;
			cout<<"Enter b value: ";
			cin>>b;
			cout<<"\nRESULT :"<<a+b+1;
		}
		void add(int x,int y)
		{
			cout<<"\nRESULT :"<<x+y+2;
		}
		void add(double x,double y)
		{
			cout<<"\nRESULT :"<<x+y+2;
		}
};
int main()
{
	addition a;
	a.add();
	a.add(10,20);
	a.add(10.5,20.0);
	return 0;
}

