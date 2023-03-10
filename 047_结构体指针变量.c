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

int main ()
{
        struct student s={89,"c++","wangliu",'m',18};
        struct student *p;
        p->score=59;//错误，因为p为野指针；
        //printf("%d\n",p->score);

        printf("%d,%s,%s,%c,%d\n",s.score,s.group,s.info.name,s.info.sex,s.info.age);

        return 0;
}

