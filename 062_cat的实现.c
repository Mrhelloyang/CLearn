#include<stdio.h>
int main(int n,char* p[2])
{
        if(n!=2)
        {
                printf("use err\n");
                return -1;

        }
        FILE*fp=fopen(p[1],"r");
        if(NULL==fp)
        {
                printf("%s不存在\n",p[1]);
                return -1;
        }
        char ch;
        while(1)
        {
                ch=fgetc(fp);
                if(feof(fp))
                {
                        break；
                }
                printf("%c",ch);
        }
        printf("\n");

        return 0;

}
~   