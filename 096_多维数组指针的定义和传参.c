#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[10];
	int* p1 = a;
	int b[10];
	int(*p2)[10] = &a;//指向整个数组的首地址
	int b[3][4];
	int(*p3)[4] = b;//指向首元素，b的首元素是int[4]类型
	int(*p4)[3][4]=&b;//指向整个数组的地址，&b的地址的首元素是int[3][4]
	int c[3][4][5];
	int(*p5)[4][5] = c;
	int(*p6)[3][4][5] = &c;
	return 0;
}