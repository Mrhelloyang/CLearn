#define _CRT_SECURE_NO_WARNINGS
//1. ������ά������ϰ�������װ������
//a) �ڶ�������ռ䣬int a[3][4]
//b) ͨ��ѭ����ÿһ��Ԫ�ظ�ֵ���Լ���ӡÿ��Ԫ�ص�ֵ
//c) ʹ���꣬��Ҫ�ͷŶ����ռ�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main01()
{
	int i, j;
	int** p = (int**)malloc(3 * sizeof(int*));
	for (i = 0; i < 3; i++)
	{
		p[i] = (int*)malloc(4 * sizeof(int));
	}
	int** a=NULL;
	a = p;
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 4; j++)
		{
			a[i][j] = i;
		}
	}
	for ( i=0; i < 3; i++)
	{
		for (j=0; j < 4; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for ( i=0; i < 3; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}
int main()
{
	int i, j, k=0;
	typedef int(*ARRAY)[4];
	ARRAY p;
	p = (ARRAY)malloc(3 * 4 * sizeof(int));
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			p[i][j] = k++;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	
	free(p);//pָ�����int[4];����ֱ��free(p),������free(p[i]);
	system("pause");
	return 0;
}