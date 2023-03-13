#include<stdio.h>
#include<string.h>
int main()
{
	FILE*fp=fopen("01.txt","r");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	}
	char*p;
	char buf[4];
	//遇到换行；到文件结尾；结束本次读取
	//读取长度没有超过sizeof(buf)，一次读完
	//读取长度超过sizeof(buf)，一次读sizeof(buf)-1;
	p=fgets(buf,sizeof(buf),fp);
	printf("p=%s,buf=%s\n",p,buf);//%s会带换行；
       
       	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s\n",p,buf);
       

	//读取成功返回读取的字符，失败返回空；
	//
	//这里文件结束位置；读取失败；但是buf的内容不会改变；
       	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s\n",p,buf);
       
	p=fgets(buf,sizeof(buf),fp);
        printf("p=%s,buf=%s\n",p,buf);
	
	fclose(fp);	
	return 0;

}
