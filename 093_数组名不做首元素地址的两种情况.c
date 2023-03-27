#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[10];
	printf("%d\n",sizeof(a));//测的是整个数组的大小
	printf("%d\n", &a);
	printf("%d\n",&a+1 );//整个数组的首地址
	printf("%d\n",sizeof(a+0) );//首元素大小，要么是8要么是4
	return 0;
}