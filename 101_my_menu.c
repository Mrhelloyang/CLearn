#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_deal_file.h"
void help()
{
	printf("=================================\n");
	printf("1 �����ļ�\n");
	printf("2 �����ļ�\n");
	printf("3 ����\n");
	printf("4 �˳�\n");
	printf("=================================\n");
}
void my_jiami()//����ģ��
{
	char path1[100], path2[100];
	printf("��������Ҫ���ܵ��ļ�����\n");
	scanf("%s",path1);
	printf("������������ɵ��ļ�����\n");
	scanf("%s",path2);
	//printf("%s\n", path1);
	//printf("%s\n", path2);
	int ret=my_file_jiami(path1,path2);
	if(ret==1)
	{
		printf("���ܳɹ�\n");
	}
	else
	{
		printf("����ʧ��\n");
	}
}
	
void my_jiemi()//����ģ��
{
	char path1[100], path2[100];
	printf("��������Ҫ���ܵ��ļ�����\n");
	scanf("%s", path1);
	printf("������������ɵ��ļ�����\n");
	scanf("%s", path2);
	//printf("%s\n", path1);
	//printf("%s\n", path2);
	int ret=my_file_jiemi(path1, path2);
	if (ret == 1)
	{
		printf("���ܳɹ�\n");
	}
	else
	{
		printf("����ʧ��\n");
	}

}
void my_clear()
{
	system("cls");//����

}
void my_exit()
{
	exit(-1);//�˳�

}