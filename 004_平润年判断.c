#include<stdio.h>
int main()
{
	int a;
	printf("请输入年份：\n");
	scanf_s("%d", &a);
	if (a % 100 == 0)
	{
		if(a%400==0)
		{
			printf("闰年\n");
		}
		else
		{
			printf("平年\n");
		}
	}
	else
	{
		if (a % 4 == 0)
		{
			printf("闰年\n");
		}
		else
		{
			printf("平年\n");
		}

	}
	return 0;
}