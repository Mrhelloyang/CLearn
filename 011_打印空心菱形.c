#include<stdio.h>
int main()
{
	int n;
	scanf_s
	("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			printf("1");
		}
		printf("*");
		if (i > 0)
		{
			for (int k = 0; k < (2 * i) - 1; k++)
			{
				printf("2");


			}
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("3");
		}
		printf("*");
		if (i < n - 2)
		{

			for (int k = 0; k < 2 * n - 2 * i - 5; k++)
			{
				printf("4");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}