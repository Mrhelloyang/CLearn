#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_add(int a, int b)
{
	return a + b;
}
int my_mul(int a, int b)
{
	return a / b;
}

typedef int (*PARRAY)(int, int);
void test(int a, int b, PARRAY p)//�ص������������ú���д�Ĵ���ֱ�ӵ��ã��ȽϷ��㣻
{
	printf("����ǰ��a=%d,b=%d\n",a,b);
	printf("result=%d\n",p(a,b));
}

int main()
{
	test(10, 40, my_add);
	test(40, 8, my_mul);
	return 0;
}