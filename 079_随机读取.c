#include<stdio.h>
void read_file()
{
	FILE*fp=fopen("7.txt","r");
	if(fp==NULL)
	{
	
		perror("fopen");
		return ;
	}
	//rewind(fp);//把光表移到开头；
	fseek(fp,10,SEEK_SET);
	char buf[20];
	int ret=fread(buf,sizeof(buf),1,fp);
	printf("ret=%d\n",ret);
	for(int i=0;i<20;i++)
	{
		printf("buf[%d]=%c\n",i,buf[i]);
	}
	long   size;
	size=ftell(fp);
	printf("%ld\n",size);
	
	
}
int main()
{
	read_file();
	return 0;
}
