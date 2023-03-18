#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
	char*name;
	int id;
	int namelen;
}Stu;
void write_file()
{
	FILE*fp=fopen("./test.txt","wb");
	if(NULL==fp)
	{
		perror("fopen");
		return ;
	}
	Stu s;
	s.id=1;
	s.namelen=strlen("mike");
	s.name=(char*)malloc(s.namelen+1);
	strcpy(s.name,"mike");
	
	//把结构体写入
	int ret;
	ret=fwrite(&s,sizeof(s),1,fp);
	if(ret<=0)
	{
		perror("fwrite");
		return ;
	}
	//把name相关连的东西写入
	ret=fwrite(s.name,s.namelen,1,fp);
	if(ret<=0)
	{
		perror("fwrite name");
		return ;
	}
	fclose(fp);
	fp=NULL;
}


void read_file()
{
	FILE*fp=fopen("./test.txt","rb");
	if(NULL==fp)
	{
		perror("fopen");
		return ;
	}

	Stu s;
	int ret;
	ret=fread(&s,sizeof(s),1,fp);
	if(ret<=0)
	{
		perror("fread");
		return ;
	}

	s.name=(char*)malloc(s.namelen+1);
	memset(s.name,0,s.namelen+1);
	ret=fread(s.name,s.namelen,1,fp);
	if(NULL==fp)
	{
		perror("fread name");
		return ;
	}
	printf("%s,%d,%d,\n",s.name,s.id,s.namelen);
}


int main(int argc, char *argv[])
{
	//write_file();	
	read_file();
	return 0;
}
