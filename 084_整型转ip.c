#include<stdio.h>
int main()
{

    int a = 0x7f000001;//0x表示16进制
    unsigned char* p = (unsigned char*)&a;//取a的地址，然后强制类型转换；
    char ip[50];
    sprintf(ip,"%d.%d.%d.%d",p[3],p[2],p[1],p[0]);
    printf("%s",ip);
    return 0;
}