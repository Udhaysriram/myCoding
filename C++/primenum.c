#include<stdio.h>
int main()
{
	int a,b,n,i,j,m;
	printf("Enter the value 1 : ");
	scanf("%d",&a);
	printf("Enter the value 2 : ");
	scanf("%d",&b);
	for( i=a; i<=b; i++)
	{
		m=0;
		for( j=2; j<i; j++)
		{
			if(i%j==0)
			{
				m=1;
				break;
			}
		}
	
	if(m==0)
	{
		printf("%d  ",i);
	}
	}
	
	return 0;
}
