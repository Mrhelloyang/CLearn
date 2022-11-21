#include<stdio.h>
int main()
{

	long long n, a=1, i;
	scanf_s("%lld",&n);
	for (i = 1; i < n + 1; i++)
	{
		a *= 2;
	}
	printf("%lld",a-1);
}