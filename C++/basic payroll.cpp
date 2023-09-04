#include<iostream>
using namespace std;
int main()
{
	int sal=10000,hra,pf,da,esi,tot;
	int k=sal/100;
			hra=k*30;
			da=k*12;
			esi=k*7;
			pf=k*20;
			tot=hra+da+sal-esi-pf;
			
			cout<<tot;
			return 0;
}
