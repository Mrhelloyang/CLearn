#include<stdio.h>
int main()
{
	int a[] = { 5,100,32,45,21,67,32,68,41,99,13,71 };
	int n = sizeof(a) / sizeof(*a);
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				int b;
				b = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = b;
			}
		}
	}
	printf("%d\n", *(a + n - 2));
	return 0;
}