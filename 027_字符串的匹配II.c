#include<stdio.h>
int* mystrstr(char* str1, const char* str2)
{
    int n = strlen(str1);
    int m = strlen(str2);
    int a = 0;
    int  i,tmp = 0;
    for ( i = 0; i < n; i++)
    {
        if (str1[i] == str2[0])
        {
            tmp = i;
            for (int j = 0; j < m; j++)
            {
                if (str1[tmp] != str2[j])
                {
                    break;
                }
                if (j == m - 1)
                {
                    a = 1;
                }
                tmp++;
            }
        }
        if (a == 1)
        {
            break;
        }
    }
    if (a == 1)
    {
        return i;
    }
    if (a == 0)
    {

        return -1;
    }
}
int main()
{
    char str1[1000], str2[1000];
    gets(str1);
    gets(str2);
    //mystrstr(str1, str2);
    printf("%d\n",mystrstr(str1, str2));
	return 0;

}