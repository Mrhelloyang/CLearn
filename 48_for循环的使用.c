#include<stdio.h>
int main() 
{ 
	int a = 1, b = 2;
	for (; a < 8; ++a)//for循环里面的前置++和后置++都是一样效果，前加就是先加后用。
		//for循环是第一遍不执行++a；第一遍执行后先进行++，后判断条件
	{
		b += a;
		a += 2;
	}
	printf("%d,%d\n",a,b);
}
