#include<stdio.h>
int main()
{
	int a, b,y=0;
	scanf_s("%d %d",&a,&b);
	if (a<b)
	{
		int tmp = 0;
			tmp = a;
			a = b;
			b = tmp;
	}
	int c = b;
	for (b; b >= 1; b--)
	{
		if (a % b == 0)
		{
			if (c% b == 0)
			{
				printf("%d\n",b);
				break;
			}
		}
	}
	return 0;
}


//辗转相除法求最大公约数
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}

	if (a % b == 0)
	{
	}
	else
	{
		int c = a % b;
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
	}
	printf("%d\n", b);
	return 0;
}