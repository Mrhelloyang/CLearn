#include<stdio.h>
int main()
{
	long long n, m, a = 1, b = 1, c = 1;
	//int 类型最大可以放下10位数
	//需要把int改为long long可以放下19位的数，需要把%d改为%lld；
	scanf("%lld %lld", &n, &m);
	if (n == 0 || m == 0)
	{
		printf("1\n");
	}
	else
	{
		for (int i = 1; i < n + 1; i++)
		{
			a *= i;
		}
		for (int i = 1; i < m + 1; i++)
		{

			b *= i;
		}
		if (n == m)
		{
			c = 1;

		}
		else
		{
			for (int i = 1; i < n - m + 1; i++)
			{
				c *= i;
			}
		}
		printf("%lld\n", a / (b * c));
	}
	return 0;
}