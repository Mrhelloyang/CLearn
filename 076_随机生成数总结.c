#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int *p;
	int i;
	int n=10;
	p=(int*)malloc(n*sizeof(int));
	srand((unsigned)time(NULL));//种子不要设置多次；
	for(i=0;i<n;i++)
	{
		*(p+i)=rand()%100;//注意中英文符号
	}
	for(i=0;i<n;i++)
	{
	
		//printf("%d ",*(p+1));//不要反低级错误把i写成1；
		printf("%d ",*(P+i));
	}
	free(p);
	return 0;
}
