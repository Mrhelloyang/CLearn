#include<stdio.h>
int func(int n)
{
	if (n == 1)//低级错误了直接写等号是赋值，不是判断
	{
		return 1;
	}
	else
	{
		return 2 * func(n - 1) + 1;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int ret = func(n);
	printf("%d\n", ret);
	return 0;
}
