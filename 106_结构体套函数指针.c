#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef struct test
//{
//	int a;
//	void (*pfunc)(int,int);
//}test;
typedef void(*PFUNC)(int, int);
typedef struct test {
	int a;
	PFUNC pfunc;
}test;
void func(int a,int b)
{
	printf("a=%d,b=%d\n",a,b);
}

int main()
{
	test obj;
	obj.a = 111;
	obj.pfunc=func;
	obj.pfunc(18,12);
	return 0;
}