#include<stdio.h>
#include<string.h>
int main01()
{
	char test[] = "abc";
	int n = strlen(test);
	char* start = test;
	char* end = &test[n-1];//下标从0开始；
	n = end - start;
	printf("%d\n",n);
	return 0;
}
int main()
{
	char tmp[]="hello";
	scanf_s("%c",&tmp[1]);//这个地方不要加\n
	printf("%s\n",tmp);
	return 0;
}