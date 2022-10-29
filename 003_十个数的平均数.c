#include<stdio.h>
int main()
{
	int a, i,b=0;
	float p;
	for (i = 1; i<= 10; i++)
	{
		scanf("%d", &a);
		b+=a;
	}
	p = (float)b / 10;
	
	printf("%.2f\n",p);
	return 0;
}