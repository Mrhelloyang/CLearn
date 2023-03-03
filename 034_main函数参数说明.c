#include<stdio.h>
#include<string.h>
int main(int n, char** tmp)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{

		printf("tmp[%d]=%s\n",i,tmp[i]);
	}
	return 0;
}