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
	printf("%p,%p,%p\n", func, &func, *func);//����������һ���ģ�

	if (test)//test�Ǻ����������������ǵ�ַ����ַ��Ϊ�㣻
	{
		printf("����Ϊ��\n");
	}
	return 0;
}