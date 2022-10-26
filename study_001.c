#include<stdio.h>
int main()
{
	int A;
	int B;
	printf("请输入 a 和 b 的值: ");
	scanf_s("%d %d", &A,& B);
	printf("%d", A + B );
	return 0;
}