#include<stdio.h>
int main()
{
	int i,j,n=5,count=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<i+1)
			{
				printf("*");
			}
			else
			{
				count++;
				printf("%d",count);
			}
			
		}
		printf("\n");
	}
	return 0;
}

