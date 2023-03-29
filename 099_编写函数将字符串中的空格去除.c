//4. 编写一个函数。其参数为一个字符串，函数删除字符串中的空格
#include<stdio.h>
#include<string.h>
void my_delete(char* a, int* n)
{
	char*tmp=a;
	while(1)
	{
		char* ret = strstr(tmp, " ");
		tmp=ret+1;
		if(ret==NULL)//判断的时候要用==；
		{
			break;
		}
		while (*(ret + 1) != '\0')
		{
			*ret = *(ret + 1);
			ret++;
		}
		*(ret) = '\0';
		*n = *n - 1;

	}
}
int main()
{
	char a[] = "aaaa bbbb cccc dd eeeee fff gggg hhhh";
	int n = sizeof(a) / sizeof(*a);
	printf("%d\n", n);
	printf("删除前:%s\n",a);
	my_delete(a,&n);
	printf("%d\n", n);
	printf("删除后:%s\n",a);
	return 0;
}
