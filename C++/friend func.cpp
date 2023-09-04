#include<iostream>
using namespace std;
class B;
class A
{
	public:
		int a=10;
		friend void add(A,B);
};
class B
{
	public:
		int b=10;
		friend void add(A,B);
};
void add(A a1, B b1)
{
	cout<<a1.a+b1.b;
}
int main()
{
	A a1;
	B b1;
	add (a1,b1);
	return 0;
}
