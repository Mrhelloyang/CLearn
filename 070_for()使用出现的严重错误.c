#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
    int a[] = { 1,31,312,42,2,124,52,113,3,24 };
    int n = sizeof(a) / sizeof(*a);
    printf("%d\n", n);
    for (int i = max; i > 1; i--)
    {
        //printf("#");
        //for (int j = 0; j < i - 1; i++)//这种严重的错误不要再犯了，还有就是不要在for()后面加分号。
        for (int j = 0; j < i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;


            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}