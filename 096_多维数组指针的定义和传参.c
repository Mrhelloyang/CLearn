#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[10];
	int* p1 = a;
	int b[10];
	int(*p2)[10] = &a;//ָ������������׵�ַ
	int b[3][4];
	int(*p3)[4] = b;//ָ����Ԫ�أ�b����Ԫ����int[4]����
	int(*p4)[3][4]=&b;//ָ����������ĵ�ַ��&b�ĵ�ַ����Ԫ����int[3][4]
	int c[3][4][5];
	int(*p5)[4][5] = c;
	int(*p6)[3][4][5] = &c;
	return 0;
}