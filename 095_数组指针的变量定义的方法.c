#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//1
	typedef int ARRAY[10];
	ARRAY* p = NULL;
	int a[10];
	p = &a;
	//2����
	int(*p)[10] = NULL;//�����()һ��Ҫд��Ȼ�ͳ���ʷָ��������
	int b[10];
	p = &b;
	//3����
	typedef int(*PARRAY)[10];//()һ��Ҫд��
	PARRAY p = NULL;
	int c[10];
	p = &c;
	return 0;
}