#include<stdio.h>
int main()
{
	void* p;
	int a;
	p = &a;
	*(int *)p  = 10;//强制类型转换；
	printf("%d\n",a);
	return 0;
}
