#include<stdio.h>
#include<stdlib.h>
//2. �ṹ��Ƕ��һ��ָ��Ͷ���ָ����ϰ

//�ṹ�����ͣ�ÿ����ʦ������ѧ��
typedef struct Teacher
{
	char* tName; //��ʦ���֣���Ҫ��̬����ռ�
	char** stu;  //����ѧ������Ҫ��̬����ռ䣬��������
	int age;
}Teacher;

//��createTeacher�з���ռ�
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

//����Ա��ֵ
void initTeacher(Teacher* p, int n1, int n2)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		sprintf_s((p + i)->tName, "%s%d%d", "mike", i, i);
	}
	(p + i)->age = 18 + i;
}

//��ӡ�ṹ���Ա��Ϣ
void printTeacher(Teacher* p, int n1, int n2)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		printf("%s", (p + i)->tName);
	}

}

//���ݵ�ʦ��������, ����
//void sortTeacher(Teacher* p, int n)


//�ͷſռ䣬�ں����ڲ���p��ֵΪNULL
//void freeTeacher(Teacher** p, int n1, int n2)

int main(void)
{
	int ret = 0;
	int n1 = 3; //��ʦ����
	int n2 = 3; //ѧ��
	Teacher* p= NULL;

	ret = createTeacher(&p, n1, n2);
	if (ret != 0)
	{
		printf("createTeacher err:%d\n", ret);
		return ret;
	}

	initTeacher(p, n1, n2); //����Ա��ֵ

	//��ӡ��Ա������ǰ
	printf("����ǰ��\n");
	printTeacher(p, n1, n2);


	//���ݵ�ʦ��������, ����
	//sortTeacher(p, n1);

	//��ӡ��Ա�������
	//printf("\n�����\n");
	//printTeacher(p, n1, n2);

	//�ͷſռ䣬�ں����ڲ���p��ֵΪNULL
	//freeTeacher(&p, n1, n2);

	return 0;
}