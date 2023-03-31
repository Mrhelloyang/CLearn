#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_deal_file.h"
void help()
{
	printf("=================================\n");
	printf("1 加密文件\n");
	printf("2 解密文件\n");
	printf("3 清屏\n");
	printf("4 退出\n");
	printf("=================================\n");
}
void my_jiami()//加密模块
{
	char path1[100], path2[100];
	printf("请输入需要加密的文件名：\n");
	scanf("%s",path1);
	printf("请输入加密生成的文件名：\n");
	scanf("%s",path2);
	//printf("%s\n", path1);
	//printf("%s\n", path2);
	int ret=my_file_jiami(path1,path2);
	if(ret==1)
	{
		printf("加密成功\n");
	}
	else
	{
		printf("加密失败\n");
	}
}
	
void my_jiemi()//解密模块
{
	char path1[100], path2[100];
	printf("请输入需要解密的文件名：\n");
	scanf("%s", path1);
	printf("请输入解密生成的文件名：\n");
	scanf("%s", path2);
	//printf("%s\n", path1);
	//printf("%s\n", path2);
	int ret=my_file_jiemi(path1, path2);
	if (ret == 1)
	{
		printf("解密成功\n");
	}
	else
	{
		printf("解密失败\n");
	}

}
void my_clear()
{
	system("cls");//清屏

}
void my_exit()
{
	exit(-1);//退出

}