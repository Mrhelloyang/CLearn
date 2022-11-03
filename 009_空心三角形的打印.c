#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j <=n-i;j++)
		{
			printf(" ");
		}
		printf("*");
		if (i >= 2 && i < n)
		{
			for (int k = 1; k <= 2*i - 3; k++)
			{
				printf(" ");
				
			}
			printf("*");
		}
		if(i==n)
			for (int g = 1; g <= 2 * n - 2; g++)
			{
				printf("*");

			}
		printf("\n");
		
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d",&n);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j <n-i-1;j++)
		{
			printf("1");
		}
		printf("*");
		if (i >= 1 && i < n-1)
		{
			for (int k = 0; k < 2*i - 1; k++)
			{
				printf("2");
				
			}
			printf("*");
		}
		if(i==n-1)
			for (int g = 0; g <2 * n - 2; g++)
			{
				printf("*");

			}
		printf("\n");
		
	}
	return 0;
}