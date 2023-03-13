#include<stdio.h>
#include<string.h>
int main(int n,char**p)
{
        if(n!=3)
        {

                printf("use err\n");
                return -1;
        }
        //printf("%s,%s\n",p[1],p[2]);
        if(strcmp(p[1],p[2])==0)
        {
                printf("源文件和目的文件同名\n");
                return -2;
        }
        FILE*fp1;
        FILE*fp2;
        fp1=fopen(p[1],"r");
        if(NULL==fp1)
        {
                perror("fp1 open");
                return -3;
        }
        fp2=fopen(p[2],"w");
        if(NULL==fp2)
        {
                fclose(fp2);
                perror("fp2 open");
                return -4;
        }
        char ch;
        while(1)
        {
                ch=fgetc(fp1);
                if(feof(fp1))
                {
                        break;
                }
                fputc(ch,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        return 0;
}
