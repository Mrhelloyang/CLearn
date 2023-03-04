#include<stdio.h>
int my_atoi(char * str)//这里千万不要加“;”,会出错
{
        char* tmp = str;
        int t=1;
        if (*tmp == '-')
        { 
				t = 0;
                tmp= tmp + 1;;
        }
        else if(*tmp == '+')
        {
                tmp= tmp + 1;
        }
        int mun = 0;
        while (*tmp != '\0')
        {
                        mun = mun * 10 + (*tmp - '0');//这里是从百位加起；
                        tmp++;
        }
        if (t == 0)
        {
                return -mun;
        }
        else
        {
                return mun;
        }
}
int main()
{

        printf("%d\n",my_atoi("+123"));
        printf("%d\n",my_atoi("-123"));
        printf("%d\n",my_atoi("123"));
}
