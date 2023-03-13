#include<stdio.h>
int main()
{
	FILE *fp=fopen("01.txt","w");	
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	fputs("aabb",fp);
	fputs("ccdd",fp);
	//printf("%s\n",fp);
	
	fputs("hello\0abc\n",stdout);//fputs()遇到\0就结束；//写入成功返回；失败返回-1；
	fclose(fp);
	return 0;
}
