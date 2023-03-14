/* 1、产生500个100以内的随机数，以如下格式写入文件中(每写一个数字后换行)：
10
20
30
提示：fputs()，sprintf()

2、读取1中文件的内容，把文件的每行数字分别放在一个数组中int a[1024]，然后打印数组内容
提示：fgets()，sscanf()，feof()
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define max 10
void  srand_c(int* p)
{
    srand((unsigned)time(NULL));//种子不要设在多次，在if里面，循环设置种子；种子产生随机数与时间有关
    //for循环不足1s，读取的是同一个数
    for (int i = 0; i <max; i++)
    {
        *(p + i) = rand() % 100;
    }
}


void write()
{
    FILE* fp = fopen("03.txt", "w");
    if (fp == NULL)
    {
        perror("fopen write");
        return ;
    }
    int p[1024];
    srand_c(p);
    char ch[1000];
    for (int i = 0; i < max; i++)
    {
        sprintf(ch, "%d\n", p[i]);
        fputs(ch, fp);
    }
    fclose(fp);
    fp = NULL;
}
void read()
{
    FILE* fp ;
    fp= fopen("03.txt", "r");
    if (fp == NULL)
    {
        perror("fopen read");
        return ;
    }
    int i = 0;
    char* L;
    char b[100];
    int a[1024];
    while (1)
    {
        L = fgets(b, sizeof(b), fp);
        if (L == NULL)
        {
            break;
        }
        sscanf(b, "%d", (a + i));
       // printf("%d\n", a[i]);

        i++;
    }
    fclose(fp);



    //冒泡排序
    int j, tmp;
    for(i=0;i<max-1;i++)
    {
    	//for(j=0;j<n-i-1;i++)//严重错误！！！！！！！
	for(j=0;j<max-i-1;j++)
    	{
	
		if(a[j]>a[j+1])
		{
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
	
	}
    
    }
    fp=fopen("03.txt","w");
    if(NULL==fp)
    {
    	perror("fopen paixu");
    	return;
    }
    char ch[100];
    
    for(i=0;i<max;i++)
    {
    	sprintf(ch,"%d\n",a[i]);
	fputs(ch,fp);	
    }
    fclose(fp);
    fp=NULL;

}
int main()
{
   // write();
    read();
    return 0;
}
