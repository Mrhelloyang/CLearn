/*2、利用sleep函数(Linux平台)结合结构体，编写一个模拟时钟
struct Time
{//表示时间的数据类型
        int hour;
        int minute;
        int second;
};

提示：
1)#include <unistd.h>
sleep(1);  //以秒为单位

2) fflush(stdout); //人为刷新打印缓冲区
"\r"，转义字符，跳到句首打印*/
#include<stdio.h>
#include<time.h>
#include<unistd.h>
typedef struct Time
{//表示时间的数据类型
        int hour;
        int minute;
        int second;
}Time;
int main()
{
        Time TIME;
        TIME.second=0;
        TIME.minute=0;
        TIME.hour=0;
        while(1)
        {
                TIME.second++;
                printf("%02d:%02d:%02d\r",TIME.hour,TIME.minute,TIME.second);
                if(TIME.second==60)
                {
                        TIME.minute++;
                        if(TIME.minute==60)
                        {
                                TIME.hour++;
                                TIME.minute=0;
                        }
                        TIME.second=0;
                }
                sleep(1);
                fflush(stdout);
        }

        return 0;
}
~