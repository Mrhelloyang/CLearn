#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student 
{
	char *name;		//名字
	int id;
	int name_len;	//名字长度
}Stu;

void write_file()
{
	FILE *fp = NULL;
	//以写方式打开文件
	fp = fopen("./test.txt", "wb");
	if(fp == NULL) //打开失败
	{
		perror("write_file fopen");
		return;
	}
	
	Stu s;	//定义结构体变量
	
	//结构体成员赋值
	s.id = 1;
	s.name_len = strlen("mike"); //名字长度
	s.name = (char *)malloc(s.name_len + 1);
	strcpy(s.name, "mike");
	
	//1、先将结构体写入文件
	int ret = 0;
	ret = fwrite(&s, sizeof(s), 1, fp);
	if (ret <= 0) 
	{
		perror("fwrite");
		return;
	}
	
	//2、再将name所关联的字符串存到文件中
	ret = fwrite(s.name, s.name_len, 1, fp);
	if (ret <= 0) 
	{
		perror("fwrite name");
		return;
	}
	
	//关闭文件
	fclose(fp);
	fp = NULL;
}

void read_file()
{
	FILE *fp = NULL;
	//以读方式打开文件
	fp = fopen("./test.txt", "rb");
	if(fp == NULL) //打开失败
	{
		perror("read_file fopen");
		return;
	}
	
	Stu s;
	
	//1、先将结构体读出来
	int ret = 0;
	ret = fread(&s, sizeof(s), 1, fp);
	if (ret <= 0) 
	{
		perror("fread");
		return;
	}
	
	//2、再读字符串
	s.name = (char *)malloc( s.name_len + 1 );
	memset(s.name, 0, s.name_len+1);

	ret = fread(s.name, s.name_len, 1, fp);
	if (ret <= 0) 
	{
		perror("fread name");
		return;
	}
	
	//打印结构体成员
	printf("name = %s, id = %d, len = %d\n", s.name, s.id, s.name_len);
	
	
	//关闭文件
	fclose(fp);
	fp = NULL;
}

int main(int argc, char *argv[])
{
	write_file();
	//read_file();
	
	return 0;
}
