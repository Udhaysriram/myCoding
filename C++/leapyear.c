#include<stdio.h>
int main()
{
int n;
printf("Enter the year ");
scanf("%d",&n);
if(n%4==0 || n%400==0)
{
	printf("This is a leap year...");
}
else
{
	printf("This is not leap year...");
}


return 0;
}
