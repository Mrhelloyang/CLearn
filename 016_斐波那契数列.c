#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[31];
	a[0] = 1;
	a[1] = 1;
	if (n > 1)
	{
		for (int i = 2; i <=n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
	}
	printf("%d\n",a[n]);
	return 0;
}