#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "ajajgejejsduydajfhdjasidjuyaenbfehfeuydfklasdhaslduy";
	char* t = strstr(str+15, "uy");//strstr(地址，查找内容);
	 //char* t= strstr( &str[15], "uy");//str在这里就是个地址，直接写str+15就行，如果写成str[15]和*(str+15)等价就成先取str[15]的内存，就不是地址了，变成内存了，
	 /**char* start = str;
	char *p;
	int n=0;
	while (1)
	{
		p = strstr(start, "uy");//strstr在start指向的内存里面查找uy出现的首地址，失败就返回NULL
		if (p != NULL)
		{
			start = p + strlen("uy");
			n++;
		}
		else 
		{
			break;
		}

	}
	printf("%d\n",n); */
	printf("%s\n", t);
	return 0;
}
