#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//1
	typedef int ARRAY[10];
	ARRAY* p = NULL;
	int a[10];
	p = &a;
	//2常用
	int(*p)[10] = NULL;//这里的()一定要写不然就成历史指针数组了
	int b[10];
	p = &b;
	//3常用
	typedef int(*PARRAY)[10];//()一定要写；
	PARRAY p = NULL;
	int c[10];
	p = &c;
	return 0;
}