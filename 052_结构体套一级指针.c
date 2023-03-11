#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student {
        int score;
        char *name;
        //char name[100];
        int age;
};

int main()
{
        struct Student *p;
        int n=3;
        int i;
        p=(struct Student *)malloc(n*sizeof(struct Student));
        for( i=0;i<n;i++)
        {
                (p+i)->name=(char*)malloc(100);
                (p+i)->score=50;
                strcpy((p+i)->name,"mike");
                (p+i)->age=18;
                printf("%d,%s,%d\n",(p+i)->score,(p+i)->name,p[i].age);//如果p是指针变量的话，需要用->,如果想用.；就要换成跑p[i].name;y
				//结构体不使用*，结构体有多个变量；数组可以用但是太麻烦
        }
        for(i=0;i<n;i++)
        {
                free((p+i)->name);//先释放成员；再释放p；
                (p+i)->name=NULL;
        }
        free(p);
        p=NULL;
        return 0;
}
~  