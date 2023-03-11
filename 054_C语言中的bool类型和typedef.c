include<stdio.h>
enum _bool
{//枚举函数；
        false,true
};
typedef enum _bool bool;
int main ()
{
                bool flag;
                flag =true;
                flag =false;
                return 0;
}
/*typedef的作用；
1.改名
typedef int int64;//带分号
typedef struct student 
{
        char tem;
}stu;//把把结构体struct student改名为stu；
2.代码移植
3封装类型
*/
/*
#define宏定义和typedef的区别
#include<stdio.h>
#define dpchar char*
#define int64 int//1，不要加分号2.把下边编译语句的所有int64出现的地方都替换成int；3.预处理语句
int main()
{
        typedef int int32;//1.要加分号；2.把int改名为int32；3.编译语句
        dpchar p1,p2;
        printf("%lu,%lu\n",sizeof(p1),sizeof(p2));//8,1/这里是define只把第一个定义成了指针；这是缺陷      
        typedef char* dpChar;
        dpChar a1,a2;
        printf("%lu,%lu\n",sizeof(a1),sizeof(a2));
}
*/
