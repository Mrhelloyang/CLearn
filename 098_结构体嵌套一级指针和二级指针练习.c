#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma execution_character_set("utf-8")
//2. 结构体嵌套一级指针和二级指针练习

//结构体类型，每个导师有三个学生
typedef struct Teacher{
	char* tName; //导师名字，需要动态分配空间
	char** stu;  //三个学生，需要动态分配空间，堆区数组
	int age;
}Teacher;
//在createTeacher中分配空间
int createTeacher(Teacher** p/*out*/, int n1, int n2)
{
	int i, j;
	*p = (Teacher*)malloc(n1 * sizeof(Teacher));
	if (NULL==p)
	{
		perror("malloc");
		return 1;
	}
	for (i = 0; i < n1; i++)
	{
		(*p + i)->tName = (char*)malloc(sizeof(char) * 10);
	}
	for ( i = 0; i < n1; i++)
	{
		char** tmp= (char**)malloc(sizeof(char*) * n2);
		for (j = 0; j < n2; j++)
		{
		*(tmp+j)= (char*)malloc(sizeof(char) * 10);
		}
		(*p + i)->stu = tmp;
	}
	return 0;
}

//给成员赋值
void initTeacher(Teacher* p, int n1, int n2)
{
	int i,j=0;
	for (i = 0; i < n1; i++)
	{
		sprintf((p + i)->tName, "%s%d", "mike", i);
		for (j = 0; j < n2; j++)
		{
			sprintf(*((p + i)->stu + j), "stdent%d", j);//这里导致了打印的时候重复第一个字符；
		}//因为*((p+i)->stu)是指向内存的首元素地址，*((p+i)->stu)+j就指向内存有元素的下个元素地址，并不是第二块内存；
		(p+i)->age=20+i;
	}
}
//打印结构体成员信息
void printTeacher(Teacher * p, int n1, int n2)
{
	for (int i = 0; i < n1; i++)
	{
			printf("%s", (p + i)->tName);
			printf("[%d]\n", (p + i)->age);
			for (int j = 0; j < n2; j++)
			{
				printf("%s ", *((p + i)->stu + j));
			}
			printf("\n");
	}
}
//根据导师名字排序, 降序
void sortTeacher(Teacher* p, int n1)
{
	Teacher tmp;
	for (int i=0; i < n1-1; i++)
	{
		for (int j = i + 1; j < n1; j++)
		{
			if (strcmp(((p + i)->tName) ,((p + j)->tName))<0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}
//释放空间，在函数内部把p赋值为NULL
void freeTeacher(Teacher** p, int n1, int n2)
{
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			free(*(((*p + i)->stu + j)));
		}
		free((*p + i)->stu);
		free((*p + i)->tName);
	}
	free(*p);
	*p = NULL;
}
int main()
{
	int ret = 0;
	int n1 = 3; //导师个数
	int n2 = 3; //学生
	Teacher* p= NULL;

	ret = createTeacher(&p, n1, n2);
	if (ret != 0)
	{
		//printf("createTeacher err:%d\n", ret);
		return ret;
	}

	initTeacher(p, n1, n2); //给成员赋值

	//打印成员，排序前
	printf("\n");
	printTeacher(p, n1, n2);


	//根据导师名字排序, 降序
	sortTeacher(p, n1);

	//打印成员，排序后
	printf("\n排序后：\n");
	printTeacher(p, n1, n2);

	//释放空间，在函数内部把p赋值为NULL
	freeTeacher(&p, n1, n2);
	system("pause");
	return 0;
	//里面还有中文乱码问题；
}
