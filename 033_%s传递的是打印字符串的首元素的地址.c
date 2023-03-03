#include<stdio.h>
int main()
{
	/**char* p[] = {"hello","nihao","xingnianhao"};
	char** tmp = p;
	printf("%s\n",*p);//所以这里是地址，而不是a[0]的内存；
	printf("%s\n", *(tmp+1));
	printf("%s\n", *(tmp+2)); */
	char a[] = "abcdefg";
	//char* p = a;
	//printf("%s\n",p+3);这里怎么写的是地址？
	printf("%s\n", a + 3);//%s传递的是打印字符串的首元素地址；
	return 0;
}