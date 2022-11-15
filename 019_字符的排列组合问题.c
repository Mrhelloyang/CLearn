#include<stdio.h>
int main()
{
	int n, s = 1;;
	scanf_s("%d",&n);
	for (int i = 1; i < n + 1; i++)
	{
		s *= i;
	}
	printf("%d\n",s);
	return 0;
}