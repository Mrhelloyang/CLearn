#include<stdio.h>
void move(char A, char C, int n)
{
        printf("%c-->%c\n",A, C);
}
void HanoiTower(char A, char B, char C, int n)
{
        if (n == 1)
        {
                move(A, C, n);
        }
        else
        {
                HanoiTower(A, C, B, n - 1);//将n-1个圆盘从A柱借助于C柱移动到B柱上
                move(A, C, n);//将A柱子最后一个圆盘移动到C柱上
                HanoiTower(B, A, C, n - 1);//将n-1个圆盘从B柱借助于A柱移动到C柱上
        }
}
int main()
{
        int n = 0,i;
        scanf_s("%d", &n);
        long long a = 1;
        for (i = 1; i < n + 1; i++)
        {
                a *= 2;
        }
        printf("%lld\n", a - 1);
        HanoiTower('A', 'B', 'C', n);//将n个圆盘从A柱借助于B柱移动到C柱上
        return 0;
}
