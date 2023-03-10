#include<stdio.h>
struct Student{
        char name[50];
        int age;
        int score;
};//;是语法；本质上可以写成一行，只不过写成这样好看
int main()
{
        struct Student a[]=
        {
        {"hello",15,42},
        {"wang",28,80},
        {"yang",18,43},
        };
//      struct Student obj={"hello",29,60};
//      printf("%s,%d,%d",(&obj)->name,(&obj)->age,(&obj)->score);
        int n=sizeof(a)/sizeof(*a);
        for(int i=0;i<n;i++)
        {
                printf("%s,%d,%d\n",(a+i)->name,(a+i)->age,(a+i)->score);
                printf("%s,%d,%d\n",(&a[i])->name,(&a[i])->age,(&a[i])->score);
                printf("%s,%d,%d\n",a[i].name,a[i].age,a[i].score);
                printf("%s,%d,%d\n",(*(a+i)).name,(*(a+i)).age,(*(a+i)).score);
        }
        return 0;
}
