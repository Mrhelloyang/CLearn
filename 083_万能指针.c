#include<stdio.h>
int main()
{
	void* p;
	int a;
	p = &a;
	*(int *)p  = 10;
	printf("%d\n",a);
	return 0;
}