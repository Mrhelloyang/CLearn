#include<stdio.h>
void printf_array(char** a, int n)//要看传参的是什么类型，a是首地址，
//首元素是char*，用char**来指向
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s",a[i]);
	}
	printf("\n");
}
void sort_array(char** a, int n)
{
	int i, j;
	char* tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}

}
int main()
{
	char* a[3] = {"aa","bb","cc"};
	int n = sizeof(a) / sizeof(*a);
	printf_array(a, n);
	sort_array(a, n);
	printf_array(a, n);
	return 0;
}