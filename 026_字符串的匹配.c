#include <stdio.h>
int main()
{
    char str[1000], ch[1000];
    int a = 0;
    int tmp=0;
    gets(str);
    int n = strlen(str);
    gets(ch);
    int m = strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch[0])
        {   
            tmp = i;
            for (int j = 0; j < m; j++)//要分清情况，当需要查找的字符为一个字符时如果j=1开始，就会导致for（）不运行，a也加不了
            {
                if (str[tmp] != ch[j])
                {
                    break;
                }
                if (j == m - 1)
                {
                    a++;
                }
                tmp++;
            }
        }
    }
    printf("%d\n",a);
    return 0;
}