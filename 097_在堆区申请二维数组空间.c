#define _CRT_SECURE_NO_WARNINGS
//1. 堆区二维数组练习（无需封装函数）
//a) 在堆区申请空间，int a[3][4]
//b) 通过循环给每一个元素赋值，以及打印每个元素的值
//c) 使用完，需要释放堆区空间
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
	
	free(p);//p指向的是int[4];可以直接free(p),不用先free(p[i]);
	system("pause");
	return 0;
}