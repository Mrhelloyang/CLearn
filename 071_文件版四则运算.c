#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//随机生成需要<stdlib.h>
#include<time.h>
#define max 10
int cal(int a,char op,int b)
{
	switch(op)
	{
	
		case'+':
			return a+b;
		case'-':
			return a-b;
	
		case'*':
			return a*b;
		case'/':
			return a/b;
	}
	return 0;	
}
void write()
{
    FILE*fp = fopen("03.txt", "w");
    if (fp== NULL)
    {
        perror("fopen write");
        return ;
    }
     srand((unsigned int)time(NULL));
     char op[]={'+','-','*','/'};
     int n=sizeof(op)/sizeof(*op);
     int a,b, k;
     char buf[100];
    for (int i = 0; i <max; i++)
    {
	k=rand()%n;
	a=rand()%100+1;
	b=rand()%100+1;
	sprintf(buf,"%d%c%d\n",a,op[k],b);
	fputs(buf,fp);
    }
    fclose(fp);
    fp = NULL;
}




void read()
{
    FILE*fp = fopen("03.txt", "r");
    if (fp== NULL)
    {
        perror("fopen write");
        return ;
    }
    int a,b;
    char*p;
    char op;
    char buf[4*1024]={0};//初始化为了strcat
    char ch[1024]; while(1)
    {
    	p=fgets(ch,sizeof(ch),fp);
	if(p==NULL)
	{
		break;
	}
	sscanf(ch,"%d%c%d\n",&a,&op,&b);
	sprintf(ch,"%d%c%d=%d\n",a,op,b,cal(a,op,b));
    	strcat(buf,ch);
    }
    fclose(fp);
    fp=fopen("03.txt","w");
    printf("%s",buf);
    fputs(buf,fp);
    fclose(fp);
    fp = NULL;
}

int main()
{
    write();
    read();
    return 0;
}
