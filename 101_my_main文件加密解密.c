#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#include"my_menu.h"//���˵�

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
			my_jiami();//ѡ���ļ�����
			break;
		case 2:
			my_jiemi();//ѡ���ļ�����
			break;
		case 3:
			my_clear();//����
			break;
		case 4:
			my_exit();//�˳�
			break;
		}
	}
	//����Ҫʹ��������ܣ���Ҫ��ͷ�ļ���Դ�ļ������¸�һ��
	return 0;
}