#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j < n - i-1; j++)
		{
			printf(" ");
		}
		for (int t = 0; t< 2 * i+1;t++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n-1;i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		for (int t = 0; t < 2 * n - 2 * i - 3; t++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}