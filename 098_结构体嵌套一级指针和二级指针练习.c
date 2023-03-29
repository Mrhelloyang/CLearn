#include<stdio.h>
#include<stdlib.h>
//2. 结构体嵌套一级指针和二级指针练习

//结构体类型，每个导师有三个学生
typedef struct Teacher
{
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
		//(*p + i)->age = (int*)mallc(sizeof(int) * 10);
		(*p + i)->tName = (char*)malloc(sizeof(char) * 10);
		(*p + i)->stu = (char**)malloc(sizeof(char*) * n2);
	}
	for ( i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			*((*p + i)->stu) = (char*)malloc(sizeof(char) * 10);
		}
	}
	return 0;
}

//给成员赋值
void initTeacher(Teacher* p, int n1, int n2)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		sprintf_s((p + i)->tName, "%s%d%d", "mike", i, i);
	}
	(p + i)->age = 18 + i;
}

//打印结构体成员信息
void printTeacher(Teacher* p, int n1, int n2)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		printf("%s", (p + i)->tName);
	}

}

//根据导师名字排序, 降序
//void sortTeacher(Teacher* p, int n)


//释放空间，在函数内部把p赋值为NULL
//void freeTeacher(Teacher** p, int n1, int n2)

int main(void)
{
	int ret = 0;
	int n1 = 3; //导师个数
	int n2 = 3; //学生
	Teacher* p= NULL;

	ret = createTeacher(&p, n1, n2);
	if (ret != 0)
	{
		printf("createTeacher err:%d\n", ret);
		return ret;
	}

	initTeacher(p, n1, n2); //给成员赋值

	//打印成员，排序前
	printf("排序前：\n");
	printTeacher(p, n1, n2);


	//根据导师名字排序, 降序
	//sortTeacher(p, n1);

	//打印成员，排序后
	//printf("\n排序后：\n");
	//printTeacher(p, n1, n2);

	//释放空间，在函数内部把p赋值为NULL
	//freeTeacher(&p, n1, n2);

	return 0;
}