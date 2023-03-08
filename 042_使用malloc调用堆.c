#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*p;
	int i;
	int n = 10;
	p = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n;++i)
	{
		*(p+i) = 1+i;//*(p+1)=1+i;这种低级错误不要再犯了，真的浪费时间；
		printf("%d,", *(p + i));
	}
	printf("\n");
	free(p);
	p = NULL;
	return 0;
}