#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
	//printf("%s\n",a);
	int j;
	char tmp;
	j = strlen(a)-1;//strlen()测数组长度，不包含‘0’
	//printf("%d\n",j);
	for (int i = 0; i<j; i++)
	{
		tmp =a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	
	}
	printf("%s\n",a);
	return 0;
}