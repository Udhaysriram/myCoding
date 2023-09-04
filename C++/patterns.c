#include<stdio.h>
int main()
{
	int i,j,n,s,k;
	printf("Pattern 1\n\n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	printf("\nPattern 2\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==(n-1) || j==(n-1))
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\nPattern 3\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\nPattern 4\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	printf("\nPattern 5\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
