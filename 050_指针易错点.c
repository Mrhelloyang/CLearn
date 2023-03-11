#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char *p;
        //char a[]="hell0";
        //printf("%lu",sizeof(a)/sizeof(*a));
        p=(char*)malloc(100);
        strcpy(p,"hello");
        //*p=(char*)"hello";//给p指向的首元素赋值；大小不匹配；err
        int n =sizeof("hello")/sizeof(char);
        //for(int i=0;i<n-1;i++)
        //      {
        //      *(p+i)=a[i];
        //}
        printf("%s\n",p);
        free(p);
        return 0;
}
~ 