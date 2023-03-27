#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	int a[10];
	int(*p)[10];//指针要和指向的类型相同多一个*;
	p = &a;
	for (int i=0; i< 10; i++)
	{
		printf("%d,%d\n", ((*p) + i), a+i);
		//如果这个指针不是最小步长的指针，*p转化为更小的地址；
		//*p不一定间接操作内存；
		//如果这个指针步长是最小步长，*p操作指向的内存；
		//*p===>a===>&a[0];
		//**p====>*a====>a[0]
	}
	return 0;
}