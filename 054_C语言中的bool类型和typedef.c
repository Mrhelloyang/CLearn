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
