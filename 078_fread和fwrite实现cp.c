#include<stdio.h>
#include<string.h>
void read_file(char*fname1,char*fname2)
{
	FILE*fp1=fopen(fname1,"r");
	if(NULL==fp1)
        {
                perror("fopen read\n");
                return ;
        }

	FILE*fp2=fopen(fname2,"w");
	if(NULL==fp2)
	{
		perror("fopen read\n");
		return ;
	}
	int ret;
	char tmp[1024];
	while(1)
	{
		//里面可能有for循环，返回值的从0开等于执行次数*size大小；
		ret=fread(tmp,1,sizeof(tmp),fp1);//返回读取的个数
		if(ret==0)
		{
			break;
		}
		fwrite(tmp,ret,1,fp2);
	}


}
int main(int n,char *fname[])
{
	if(n!=3)
	{
		printf("输入错误\n");
		return -1;
	}
	read_file(fname[1],fname[2]);
	return 0;
}
