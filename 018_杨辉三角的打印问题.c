#include<stdio.h>
int main()
{
	int n, a = 1, b = 1, c = 1;
	int i, j;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("1\n");
	}
	else if (n == 1)
	{
		printf("1\n");
		printf("1, 1\n");
	}
	else
	{
		printf("1\n");
		printf("1, 1\n");
		for (i = 2; i < n + 1; i++)
		{
			printf("1, ");
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					for (int s = 1; s < i + 1; s++)
					{

						a *= s;
					}
					//printf("a=%d ",a);


					for (int s = 1; s < j + 1; s++)
					{

						b *= s;
					}
					//printf("b=%d ",b);
					for (int s = 1; s < (i - j + 1); s++)
					{
						c *= s;
					}
					printf("%d, ", a / (b * c));
					//printf("c=%d ", c);
					a = 1, b = 1, c = 1;
					//printf("j=%d", j);
				}
			}
			//printf("i=%d", i);
			printf("1\n");
		}
	}
	return 0;
}
/**int main()
{
	int a[100][100], i, j, num;
	printf("请输入需要打印的行数：");
	scanf_s("%d", &num);
	for (i = 0; i < 100; i++)         //初始化数组
	{
		for (j = 0; j < 100; j++)
			a[i][j] = 0;
	}
	for (i = 0; i < num; i++)
	{ //使数组的第一列都为1
		a[i][0] = 1;
	}
	for (i = 1; i < num; i++)
	{ //第i行j列元素等于第i-1行j列和第i-1行j-1列元素的和
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i < num; i++)         //输出杨辉三角形
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*
int main()
{
	int n;
	scanf_s("%d", &n);
	int a[40][40];//看清题目要求
	for (int i = 0; i <= n; i++)
	{
		a[i][0] = 1;
	}
	for (int i = 0; i <= n; i++)
	{
		a[i][i] = 1;
	}
	for (int i = 2; i < n; i++)//赋值的时候不能全部赋值，要看输入的n
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	printf("1\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d, ", a[i][j]);
		}
		printf("1\n");
	}


  return 0;
}*/