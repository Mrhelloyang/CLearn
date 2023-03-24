#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sort(char** p1, int len1, char buf2[][30], int len2, char*** p3, int len3)
{
	int i;
	char** p  = (char**)malloc(len3 * sizeof(char*));
	for (int i = 0; i < len3; i++)
	{
		*(p + i) = (char*)malloc(100);
	}
	//strcpy(p[0], array1[0]);
	//strcpy(p[num1], *array2);
	for ( i = 0; i < len1; i++)
	{
		strcpy(p[i], *(p1 + i));
	}
	//int tmp = 3;
	for ( i = 0; i < len2; i++)
	{
		//strcpy(p[tmp], *(buf2 + i)); //*(buf2 + i)
		strcpy(p[len1+i], *(buf2 + i));//这里的地址纠结了好久，肯定要是p[len1+i],
		//tmp++;
	}
	for (i = 0; i < len3; i++)
	{
		printf("%s\n", p[i]);
	}
	//排序
	int j;
	char *tmp=NULL;
	for (i = 0; i < len3-1 ; i++)
	{
		for (j = i+1; j < len3; j++)
		{
			if (strcmp(p[i] ,p[j])>0)
			{
					tmp = p[i];
					p[i] = p[j];
					p[j] = tmp;
			}
		}
	}
	for (i = 0; i < len3; i++)
	{
		printf("%s\n", p[i]);
	}
	*p3 = p;
	return 1;
}
void free_p(char*** p3, int len3)
{
	for (int i = 0; i < len3; i++)
	{
		free(p3[i]);
	}
	for (int i = 0; i < len3; i++)
	{
		free(p3+i);
	}
	p3 = NULL;
}

int  main()
{
	int ret = 0;
	char* p1[] = { "aa", "ccccccc", "bbbbbb" };
	char buf2[][30] = { "111111", "3333333", "222222" };
	char** p3 = NULL;
	int len1, len2, len3, i = 0;
	len1 = sizeof(p1) / sizeof(*p1);
	len2 = sizeof(buf2) / sizeof(buf2[0]);
	len3 = len1 + len2;
	ret = sort(p1, len1, buf2, len2, &p3, len3);
	free_p(p3, len3);
	/*
	功能：1、把指针数组p1的字符串取出来，
		  2、把二维数组buf2的字符取出来，
		  3、上面的字符串放在 p3，p3 是在堆区指针数组(每个元素同时又指向堆区)
		  4、对 p3 中字符串进行排序，通过 strcmp() 进行排序
	参数：
		p1： 指针数组首地址，char *p1[] = {"aa", "ccccccc", "bbbbbb"};
		len1：p1元素个数
		buf2：二维数组首元素地址，char buf2[][30] = {"111111", "3333333", "222222"};
		len2：buf2字符串的行数
		p3：二级指针的地址，需要在函数内分配堆区指针数组，保存p1和buf2的字符串，还需要排序
		len3：保存p3中的字符串个数
	返回值：成功为0， 失败为负数
	*/
	

	//打印内容
	//printBuf(p3, len3);

	//释放p3所指向内存
	//在函数内部把p3的值赋值为NULL
	//len3：保存p3中的字符串个数
	//free_buf(&p3, len3);

	return 0;
}
