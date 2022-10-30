#include<stdio.h>
int main()
{
	int i, n, k;
	scanf_s("%d",&n);
	for(i=2;i<n;i++)
	{
		if (n % i == 0)
		{
			k = 0;
			break;//如果找到一个可整除的数就直接结束循环
		}
		else if(i+1==n)
		{
			k = 1;
		}
		
	}
	printf("%d\n",k);
	return 0;
}
/*思考
在基础知识方面有所欠缺,例如“%”和“/"的定义模糊导致浪费很多时间，要重视基础；
//在思考一个问题的时候应该把问题的思路理清一步一步来而不是一味的敲代码，浪费时间
，*/

//下面的程序比上面的清楚
#include<stdio.h>
int main()
{
	int i, n, k;
	scanf_s("%d", &n);
	for(i=2;i<n;i++)
	{
		if(i<n)
			if (n % i == 0)
			{
				k = 0;
				break;
			}
		else
		{

			k = 1;
		}
		
	}
	printf("%d\n",k);
	return 0;
}