#include<stdio.h>
#include<string.h>
int main(int n,char* p[2])
{
        if(n!=2)
        {
                perror("use err");
                return -1;

        }
        FILE*fp=fopen(p[1],"w");
        if(NULL==fp)
        {
                perror("fopen");
                return -1;
        }
        char buf[1024];  
	while(1)
	{
		fgets(buf,sizeof(buf),stdin);//每次读取一行；
		//printf("buf=#%s#\n",buf);
		if(strncmp(buf,":wq",3)==0)//比较buf指向的内存和":wq",比较的是字符ASCII码大小
		{
		
			break;
		}
		int len =strlen(buf);
		int i;
		for(i=0;i<len;++i)
		{
			fputc(buf[i],fp);
		}
	
	}
	fclose(fp);
        return 0;

}
