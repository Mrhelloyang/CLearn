#define _CRT_SECURE_NO_WARNINGS
//一、文件练习（需要封装合适函数，无需分文件）
//示例程序，参考《demo_file / demo.exe》
typedef struct student
{
    char name[20];
    int age;
}student;
//1、循环输入结构体信息，当输入age小于0时，则结束输入
//2、查询所有用户信息
//3、输入要删除的姓名，然后把文件中相应的名字的结构删除
//4、不可以使用第二个文件，只用一个文件来完成这个任务
//5、需要使用的文件核心操作函数fwrite、fread
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void help()
{
    printf("=====================\n");
    printf("1 输入信息\n");
    printf("2 查找信息\n");
    printf("3 删除信息\n");
    printf("4 清屏\n");
    printf("5 退出\n");
    printf("6 展示信息\n");
    printf("=====================\n");
}
void my_insert()
{
    FILE* fp = NULL;
    fp = fopen("hello.bat","ab");
    if (NULL == fp)
    {
        perror("fopen");
        return;
    }
    while (1)
    {
        student tmp;
        printf("请输入添加的名字:\n");
        scanf("%s", tmp.name);
        printf("请输入年龄:\n");
        scanf("%d",&(tmp.age));
        if (tmp.age < 0)
        {
            break;
        }
        fwrite(&tmp,sizeof(tmp),1, fp);
    }
    fclose(fp);
    fp = NULL;
}
void my_delete01()
{
	FILE *fp = fopen("hello.bat", "rb"); //读方式打开文件
	if (!fp)
	{
		perror("fopen");
		return;
	}

	//将指针移动到最后
	fseek(fp, 0, SEEK_END);
	long len = ftell(fp);//得到文件大小
	fseek(fp, 0, SEEK_SET);//因为要读文件，所以要把文件指针移动到开始

	unsigned char *p = (unsigned char *)malloc(len);
	fread(p, sizeof(unsigned char), len, fp);//这样可以一次把所有内容读入内存
	fclose(fp);//这个时候文件所有的内容都已经在堆里面，所以文件就没必要打开了

	struct student *sp = (struct student *)p;

	char str[100] = { 0 };
	printf("please input name:");
	scanf("%s", str);

	fp = fopen("hello.bat", "wb"); //写方式打开文件
	if (!fp)
	{
		perror("fopen");
		return;
	}

	int i;
	int n = len / sizeof(struct student); //结构体个数
	for (i = 0; i < n; i++)
	{
		if (strcmp(sp[i].name, str) != 0)//如果name和str不相同，才写入文件
		{
			fwrite(&sp[i], sizeof(struct student), 1, fp);
		}
	}

	fclose(fp);
	free(p);//释放
}
void my_delete()
{
	//读取
	char ch [20]={0};
    printf("请输入需要删除的人名:\n");
    scanf("%s",ch);

    FILE* fp = fopen("hello.bat", "rb");
    if (fp == NULL)
    {
        perror("fopen");
        return;
    }
    fseek(fp,0,SEEK_END);//光标移到结尾
    long len = ftell(fp);//文件的大小
	fseek(fp,0,SEEK_SET);//光标移到开头
	unsigned char* tmp = (unsigned char*)malloc(len);//相应大小的空间；
	int ret= fread(tmp,sizeof(unsigned char),len,fp);//读取内容；
	//printf("ret=%d\n",ret);
    fclose(fp);//关闭文件；
    fp = NULL;


	//写
	fp = fopen("hello.bat", "wb");//以只写的方式清空文件，然后打开；
    if (fp == NULL)
    {
        perror("fopen");
        return;
    }
	fseek(fp,0,SEEK_SET);
	struct student *tmp1 = (struct student*)tmp;
    int n = len/sizeof(struct student);
    //printf("%d\n",n);
	//!feof(fp)//没有结束返回0；结束返回非零所以通常加！；
    for (int i = 0; i < n; i++)
    {
		//printf("strcmp=%d\n",strcmp(tmp1[i].name,ch));
        //if (strcmp(tmp1[i].name, ch)!= 0);//低级错误总是会再犯，人不会在错误里面吸取教训；
		if (strcmp(tmp1[i].name,ch)!=0)
        {
			//printf("%s %d\n",tmp1[i].name,tmp1[i].age);
			fwrite(&tmp1[i],sizeof(student),1,fp);
			//printf("hello");
        }
    }
    fclose(fp);
    fp = NULL;
	free(tmp);
}

void my_seek()
{
    FILE* fp = NULL;
    fp = fopen("hello.bat", "rb");
    if (NULL == fp)
    {
        perror("fopen");
        return;
    }
    char ch[20];
    printf("请输入查找的名字:\n");
    scanf("%s",ch);
    while (1)
    {
        student tmp;
        int ret = fread(&tmp, sizeof(tmp), 1, fp);
        if (ret == 0)
        {
            printf("查找失败\n");
            break;
        }
        if (strcmp(tmp.name,ch ) == 0)
        {
            printf("%s的年龄是%d\n",tmp.name,tmp.age);
            break;
        }
    }
    fclose(fp);
    fp = NULL;

}

void my_display()
{

    FILE* fp = NULL;
    fp = fopen("hello.bat", "rb");
    if (NULL == fp)
    {
        perror("fopen");
        return;
    }
    printf("%s  %s\n","name","age");
    while (1)
    {
        student tmp;
        int ret=fread(&tmp,sizeof(tmp),1, fp);
        if (ret == 0)
        {
            break;
        }
        printf("%s  %d\n",tmp.name,tmp.age);
    }
    fclose(fp);
    fp = NULL;
}
int main()
{
    int cmd;
    while (1) 
    {
        help();
        scanf("%d",&cmd);
        switch (cmd)
        {
            case 1:
                my_insert();
                break;
            case 2:
                my_seek();
                break;
            case 3:
                my_delete();
                break;
            case 4:
                system("cls");
                break;
            case 5:
                exit(-1);
                break;
            case 6:
                my_display();
                break;
        }
    }
    return 0;
}
