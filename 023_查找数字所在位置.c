#include<stdio.h>
int main()
{
	int n, m;
	scanf_s("%d", &n);
	int a[1001];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &m);
	int left,right,mid;
	left = 0, right = n - 1;
	mid = right /2;
	while (a[mid]!= m)
	{
		if (a[mid] > m)
		{
			right = mid;
			if (mid %2 ==1)
			{
				mid =1;
			}
			else
			{
				mid = mid / 2;
			}
		}
		else if(a[mid]<m)
		{
			left = mid;
			if ((right - mid) %2 ==1)
			{
				mid = 1+ mid;
			}
			else
			{
				mid = (right - mid) / 2 + mid;
			}
		}
	}
	printf("%d\n", mid);
	return 0;
}
//上面的方法应该是错的。



int main()
{
	int n, m;
	scanf("%d", &n);
	int a[1001];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == m)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}