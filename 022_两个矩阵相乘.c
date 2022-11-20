#include<stdio.h>
int main()
{
	int n, m, k, f;
	scanf_s("%d%d", &n, &m);
	int a[21][21],b[21][21],c[21][21];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	scanf_s("%d%d", &f, &k);
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < k; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < k; j++)
		{
			c[i][j] = 0;
			for (int t = 0; t < m; t++)
			{
				c[i][j] += a[i][t] * b[t][j];
			}
		}
		for (int j = 0; j < k - 1; j++)
		{

			printf("%d ", c[i][j]);
		}
		printf("%d\n", c[i][k - 1]);
	}
	return 0;
}