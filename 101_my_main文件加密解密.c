#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#include"my_menu.h"//调菜单

int main()
{
	int n;
	while(1)
	{
		help();
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			my_jiami();//选择文件加密
			break;
		case 2:
			my_jiemi();//选择文件解密
			break;
		case 3:
			my_clear();//清屏
			break;
		case 4:
			my_exit();//退出
			break;
		}
	}
	//如需要使用这个加密，需要把头文件和源文件名重新改一下
	return 0;
}