#include<stdio.h>
int main()
{
        FILE*fp=fopen("./5.txt","w");
        if(NULL==fp)
        {
                perror("fopen");
                return 0;
        }

        for(int i=0;i<2;i++)
        {
                //往fp所关联的文件，写入一个字符，每写一个光标往后移一个；
                char ch=fputc(97+i,fp);//返回值；成功返回写入的字符；失败返回-1；
                printf("%c\n",ch);
        }
        fclose(fp);
        return 0;
}