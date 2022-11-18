#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m], b[n][m], c[n][m];//vs需要定义一个大小
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < m; j++)
		{
		scanf("%d",&a[i][j]);//依次给a[i][j]进行赋值
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
		for (int j = 0; j < m-1; j++)
		{

			printf("%d ", c[i][j]);
		}
		printf("%d",c[i][m-1]);
		printf("\n");
	}
	return 0;
}