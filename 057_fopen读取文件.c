#include<stdio.h>
int main01()

{

        FILE*fp=NULL;
        fp=fopen("./3.txt","r");
        if(NULL==fp)
        {
                //打印上一次库函数调用失败的原因
                perror("fopen");
                return -1;
        }
        return 0;
}