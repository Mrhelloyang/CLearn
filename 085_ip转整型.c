#include<stdio.h>
int main()
{

    char ip[] = "127.0.0.1";
    int a[50];
    sscanf_s(ip,"%d.%d.%d.%d\n",a, a+1, a+2,a+3);
    int tmp;
    unsigned char* p = (unsigned char*)&tmp;
    for (int i = 0; i < 4; i++)//int是4个char
    {
        p[i] = a[3 - i];
    }
    printf("%x\n", tmp);
    return 0;
}