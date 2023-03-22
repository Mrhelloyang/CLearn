#include<stdio.h>
#include<stdlib.h>
void my_strcpy01(char*dct,char*src)
{
    int i = 0;
    while (src[i] != 0)
    {
        dct[i] = src[i];
        i++;
    }
    dct[i] = '\0';
}
void my_strcpy02(char* dct, char* src)
{
    while (*src != 0)
    {
        *dct = *src;
        dct++;
        src++;
    }
    *dct = '\0';
}
void my_strcpy(char* dct, char* src)
{
    while ((*dct++=*src++)!= 0);//特意有个;代表空语句
    *dct = '\0';
}
int main()
{
    char src[] = "hello mike";
    char dct[100] = "aaaaaaaaaaaaaaaaaa";
    //my_strcpy01(dct,src);
    my_strcpy(dct, src);
    my_strcpy(dct, src);
    printf("dct=%s\n",dct);
    return 0;
}