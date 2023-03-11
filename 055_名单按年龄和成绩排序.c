#include<stdio.h>
#include<stdlib.h>
//1、假如有5个学生，按照年龄排序，如果年龄相同，按照成绩排序
typedef struct student{
	char name[50];//姓名
	unsigned int age;
	int score;//成绩
}student;
void paixi(student* p)
{
	for (int i = 5; i > 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			if (p[j-1].age > p[j].age)
			//if ((p+j-1)->age > (p+j)->age)
			{
				student tmp;
				tmp = p[j - 1];
				p[j - 1] = p[j];
				p[j] = tmp;
			}
			else if (p[j - 1].age == p[j].age)
			//else if ((p + j - 1)->age == (p + j)->age)
			{
				if (p[j-1].score > p[j].score)
				if ((p+j-1)->score > (p+j)->score)
				{
					student tmp;
					tmp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = tmp;
				}
			}
		}
	}
}
int main()

{
	student p[5] = {
		{ "张三",18,80 },
		{"张柳", 18, 70},
		{"李四",15,90},
		{"王六",40,100},
		{"刘七",23,80} ,
	};
	paixi(p);
	for (int i = 0; i < 5; i++)
	{
		printf("%s,%d,%d\n",(p+i)->name,(p+i)->age,(p+i)->score);
	}
	return 0;
}