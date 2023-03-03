#include<stdio.h>
/*不使用库函数，实现字符串拷贝功能
char src[100] = "hello";
char dst[100]; //把src的内容拷贝给dst*/

void my_strcpy(char* dst[], char* src[])
{
	int i = 0;
	while (*(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
}
int main()
{
	char src[100] = "hello";
	char dst[100];
	my_strcpy(dst, src);
	printf("%s\n", dst);
	return 0;
}