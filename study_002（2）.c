#include<stdio.h>
int main ()
{
	int A,B,C,MIN;
	scanf_s("%d %d %d", &A, &B, &C);
	MIN = A;
	if (B< MIN)
	{
		MIN = B;
	}
	if (C < MIN)
	{
		MIN = C;
	}
	printf("%d", MIN);
	return 0;
}