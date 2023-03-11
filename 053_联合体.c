#include<stdio.h>
struct A
{
        unsigned char a;
        unsigned short b;
        unsigned int c;

};
union B
{
        unsigned char a;
        unsigned short b;
        unsigned int c;
};

int main()
{
        //结构体大小略大于所有成员相加；联合体大小为最大成员大小；
        //结构体成员地址都不同；联合体首成员地址相同因为他们共用一块内存；
        struct A s1;
        union B s2;
        printf("%lu,%lu\n",sizeof(s1),sizeof(s2));//s1大约为8,s2为int的大小；
        printf("%p,%p,%p\n%p,%p,%p\n",&s1.a,&s1.b,&s1.c,&s2.a,&s2.b,&s2.c);
        s2.c=0x11223344;
        printf("%x,%x，%x\n",s2.a,s2.b,s2.c);
        s2.a=0xaa;
        printf("%x,%x，%x\n",s2.a,s2.b,s2.c);
        return 0;
}
