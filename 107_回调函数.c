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
void test(int a, int b, PARRAY p)//回调函数；可以让后面写的代码直接调用，比较方便；
{
	printf("调用前：a=%d,b=%d\n",a,b);
	printf("result=%d\n",p(a,b));
}

int main()
{
	test(10, 40, my_add);
	test(40, 8, my_mul);
	return 0;
}