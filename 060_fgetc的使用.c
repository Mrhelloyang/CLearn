#include<stdio.h>
int main()
{
        FILE*fp=fopen("5.txt","r");//读文件
        if(NULL==fp)
        {
                perror("fopen");
                return -1;

        }
        char ch;
        ch=fgetc(fp);
        printf("%c\n",ch);

        ch=fgetc(fp);
        printf("%c\n",ch);

        ch=fgetc(fp);
        printf("%d\n",ch);//vi touch 创建的文件会自动加换行,会打印10；

        ch=fgetc(fp);//只有纯文本文件可以用-1来判断结束；春文本不含数字；//EOF被定义成-1；
        printf("%d\n",ch);
        return 0;
}