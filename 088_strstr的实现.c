//2. 实现my_strstr()函数，功能和strstr()函数一样。
//a.函数中不使用任何操作字符串的函数(如：strcpy、strcmp等)
//b.函数中的任何地方不使用下标。


/*
功能：在字符串haystack中查找字符串needle出现的位置
参数：
	haystack：源字符串首地址
	needle：匹配字符串首地址
返回值：
	成功：返回第一次出现的needle地址
	失败：NULL
*/
//char* my_strstr(const char* haystack, const char* needle);
#include<stdio.h>
#include<string.h>
char* my_strstr(const char* haystack, const char* needle)
{
	char* tmp1 = needle;
	char* tmp2 = haystack;
	char* tmp3;
	while (1)
	{
		tmp3 = haystack;
		while (*haystack == *needle)
		{
			if (*needle == '\0')
			{
				break;
			}
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			break;
		}
		needle = tmp1;
		haystack++;
	}
	return tmp3;
}

int main()
{
	char haystack[] = { "abchellomiketttttaaaafdsayyyyy"};
	char needle[] = { "fdsay" };
	char *a=my_strstr(haystack, needle);
	//char *a=strstr(haystack,needle);
	printf("a=%s\n",a);//打印
	char src[] = "ddddabcd123abcd333abcd";
	char* p = strstr(src, "abcd"); //这里是首元素地址src
	printf("p = %s\n", p);
	return 0;
}