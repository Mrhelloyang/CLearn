#include<stdio.h>
int main()
{
	char str[] = "abc";
	char* p = "abc";
	*str = 't';
	//str = NULL;��ֵ��Ϊ��Ԫ�ص�ַ���������ܸ�ֵ
	printf("%c", *(p + 1));
	printf("%c", *(p + 1));
	return 0;
}