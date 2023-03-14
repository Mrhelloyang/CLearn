#include<stdio.h>
int main()
//int a=10;
//char buf[100];
//sprintf(buf,"%d\n",a);
//fputs(buf,fp);
//
//
//int a=10;
//fprintf(fp,"%d\n",a);
//
//
//
//
{	FILE*fp=fopen("4.txt","w");
	if(NULL==fp)
	{
	
		perror("fopen");
		return -1;
	}
	/*int ret;
	ret=fprintf(fp,"a=%d,b=%d\n",10,20);//返回值是写入字符的个数，失败为-1；
	printf("%d",ret);
	fclose(fp);
	*/
	fprintf(fp,"%d\n",10);
	fprintf(fp,"%d\n",20);

	return 0;
}
