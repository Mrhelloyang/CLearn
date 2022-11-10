#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
	for (int i = 0; i < 100; i++)
	{
		if ('a' <=a[i] && 'z' >= a[i])
		{
			a[i]-=32;
		}
		else if('Z'>=a[i]&&'A'<=a[i])
		{
			a[i]+=32;
		}
		
		if (i ==(sizeof(a) / sizeof(a[0]) - 1))
		{
			break;
		}
	}
	printf("%s\n",a);
	return 0;
}
/*#include<stdio.h>


int main() 
{
	char strchar[1000];
	int i = 0;
	gets(strchar);

	while (strchar[i]) 
	{  //当strchar[i]为结束符时结束循环
		if (strchar[i] >= 'A' && strchar[i] <= 'Z') 
		{ //当字母是大写字母时转换为小写
			strchar[i] += 32;  //大小写字母ASCLL码表相隔32
		}
		else
		{
			strchar[i] -= 32;
		}
		i++;
	}
	printf("%s\n", strchar);
	return 0;
}
*/