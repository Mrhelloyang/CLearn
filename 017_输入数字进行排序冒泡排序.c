#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int j = 0; j < n-1; j++)//冒泡排序第一遍找最大值，循环的第n遍找第n大的值，且要从第一个数开始进行
	{
		for (int i = 0; i < n-1-j; i++)//后面的就不要再比了浪费资源
		{
			if (a[i] > a[i + 1])
			{
				int tmp;
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
	}
	for (int i= 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}