#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_add(int a, int b)
{
	return a + b;
}
int my_min(int a, int b)
{
	return a - b;
}
int my_mul(int a, int b)
{
	return a* b;
}
int my_div(int a, int b)
{
	return a / b;
}
int main()
{
	typedef int (* PARRAY)(int,int);
	PARRAY p[] = {my_add,my_min,my_mul,my_div};
	char* str[] = {"add","min","mul","div"};
	int n = sizeof(p) / sizeof(*p);


	char cmd[10];
	int a, b, i;
	printf("请输入指令:\n");
	scanf("%s %d %d",cmd,&a,&b);//不要使用scanf_s，最好使用scanf
	//scanf_s("%s %d %d", cmd, &a, &b);
	for (i = 0; i < n; i++)
	{
		if (strcmp(cmd, str[i]) == 0)
		{
			printf("result=%d\n", p[i](a,b));
		}
	}
	return 0;
}