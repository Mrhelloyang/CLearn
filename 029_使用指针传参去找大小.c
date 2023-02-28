#include<stdio.h>
int main()
{
	void swap(int* p1, int* p2);
	int a, b;
	int* po1, * po2;
	printf("请输入ab的值\n");
	scanf_s("%d,%d", &a, &b);
	po1 = &a;
	po2 = &b;
	if (a < b) swap(po1, po2);
	printf("%d,%d\n", a, b);
	return 0;
}
void swap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}