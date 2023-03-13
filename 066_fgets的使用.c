#include<stdio.h>
int main()
{
	FILE*fp=fopen("01.txt","r");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	char*p;
	char buf[1024];
	p=fgets(buf,sizeof(buf),fp);
	printf("p=%s,buf=%s",p,buf);//%s会带换行；
       
       	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s",p,buf);
       

	//读取成功返回读取的字符，失败返回空；
	//
	//这里文件结束位置；读取失败；但是buf的内容不会改变；
       	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s",p,buf);
       
	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s",p,buf);
	
	fclose(fp);	
	return 0;

}
