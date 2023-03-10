#include<stdio.h>
struct Info{
        char name[50];
        char sex;
        int  age;
};
struct student{
        int score;
        char group[50];
        struct Info info;
        //struct info student;错误；不能嵌套本类型；可以嵌套其他类型；
        //可以嵌套任何类型的指针类型（因为指针的大小是确定的）

};
void func(struct student *s2,struct student *s1)
{

        *s2=*s1;
}
void f_printf01(struct student *s2)
{
        printf("%d,%s,%s,%c,%d\n",s2->score,s2->group,s2->info.name,s2->info.sex,s2->info.age);//s2在这里是指针,所以要用->;

}
void f_printf(struct student s2)
{
        printf("%d,%s,%s,%c,%d\n",s2.score,s2.group,s2.info.name,s2.info.sex,s2.info.age);

}

int main ()
{
        struct student s1={89,"c++","wangliu",'m',18};
        struct student s2;
        func(&s2,&s1);
        f_printf(s2);
        //f_printf01(&s2);
        return 0;
}
