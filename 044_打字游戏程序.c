#include<stdio.h>
#include"mygetch.h"
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define max 51
void srand50(char *str)
{
        srand((unsigned)time(NULL));
       for (int i = 0; i < max-1; i++)
        {
                *(str+i)= 'a' + rand() % 26;
                printf("%c", *(str+i));
        }
        *(str+max-1)='\0';
}
void begingame(char*str)
{
        int count=0;
        time_t t_start,t_end;
        for(int i=0;i<max-1;i++)
        {
                char a=mygetch();
                if(i == 0)
                {
                        t_start = time(NULL);//取开始时间
                }
                if(str[i]==a)
                {
                        printf("%c",a);
                        count++;
                }
                else
                {
                        printf("_");
                }
        }
        printf("\n");
        t_end = time(NULL);//取结束时间
        printf("\n完成输入!\n用时 %ld s\n", t_end - t_start);
        printf("正确率%lf  %%\n", (count*1.0 / (max - 1)) * 100);
        printf("按下Esc退出，任意键继续!\n\n");

}
int main()
{
        while(1)
        {
        char str[max];
        srand50(str);
        printf("\n");
        begingame(str);
        char t=mygetch();
        if(t == 27)//Esc的ascii为27
                {
                        break;
                }
        }
        return 0;
}
//代码编译时用gcc *.c;不要用gcc main.c;
