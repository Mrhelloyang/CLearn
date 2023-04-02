#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void func()
{

}
int test()
{

	return 0;
}
int main()
{
	printf("%p,%p,%p\n", func, &func, *func);//这三个都是一样的；

	if (test)//test是函数名，函数名就是地址，地址不为零；
	{
		printf("条件为真\n");
	}
	return 0;
}