#include<stdio.h>
/*��ʹ�ÿ⺯����ʵ���ַ�����������
char src[100] = "hello";
char dst[100]; //��src�����ݿ�����dst*/

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