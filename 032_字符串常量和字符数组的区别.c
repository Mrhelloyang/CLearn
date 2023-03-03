#include<stdio.h>
int main()
{
	char str[] = "abc";
	char* p = "abc";
	*str = 't';
	//str = NULL;数值名为首元素地址，常数不能赋值
	printf("%c", *(p + 1));
	printf("%c", *(p + 1));
	return 0;
}