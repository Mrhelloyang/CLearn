#include<stdio.h>
int main()
{
        //feof
        //通过文件指针判断文件结尾
        //先读内容，后才能判断，为了更新文件的指针信息，知道结尾位置
        //打开一个文件直接判断，永远返回假
        //只是判断，不移动光标
        FILE*fp=fopen("6.txt","r");
        if(NULL==fp)
        {
                perror("fopen");
                return -1;

        }
        fgetc(fp);
        while(1)
        {
                if(feof(fp));

                {
                        break;


                }
                printf("没有找到结尾\n");
        }


        return 0;
}