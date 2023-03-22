 /**键值对（"key = value"）字符串，在开发中经常使用
	要求1：请自己定义一个接口，实现根据key获取
	要求2：编写测试用例
	要求3：键值对中间可能有n多空格，请去除空格
	
	参考库函数：strncpy(), strlen(), strstr(), 不能使用sscanf()函数

	注意：键值对字符串格式可能如下：
	"key1 = value1"
	"key2 =       value2"
	"key3  = value3"
	"key4        = value4"
	"key5   =   "
	"key6   ="*/
	
	
	/*
	功能：
		键值对（“key = value”）字符串更加键key查找对应的值value
	参数：
		keyval：键值对（“key = value”）字符串
		pkey：键
		buf：匹配键所对应的内容
		len：匹配键所对应内容的长度
	返回值：
		成功：0
		失败：非0
	*/
#include<stdio.h>
#include<string.h>
int getKeyByValue(char* keyvaluebuf, char* keybuf, char* valuebuf, int* valuebuflen)
 {
	 //sscanf_s(keyvaluebuf,"%*[^v]%[^ ]",valuebuf);
	char* tmp=strstr(keyvaluebuf, valuebuf);
	int a=strlen(keybuf);
	int i = 0;
	tmp = tmp + a;//指向key1后面的空格 =    valude1
	printf("tmp1=%s\n", tmp);// =    valude1
	while ((*tmp) != '=')
	{
		tmp++;
	}
	printf("tmp2=%s\n", tmp);//tmp = tmp+i;//指向等号
	tmp++;//指向等号的空格
	while (( * tmp) == ' ')
	{
		tmp ++;
	}
	printf("tmp3=%s\n", tmp);//现在指向需要打印的第一个字符；
	i = 0;
	while ((*tmp) != ' ')
	{
		valuebuf[i] = *tmp;
		tmp++;
		i++;
	}
	
	*valuebuflen = i;
	printf("%d\n",*valuebuflen);
	valuebuf[i] = '\0';
	printf("tmp4=%s\n",valuebuf);
	return *valuebuflen;

 }
int main(void)
{
		char buf[128] = { 0 };
		int len = 0;

		/* 在"key1 =    valude1"中查找"key1"匹配的字符串，
		   如果找到，获取=后面的字符串，而且去掉多余空格"key1 =    valude1   "
		*/
		int ret =getKeyByValue("key1 =    valude1   ", "key1", buf, &len);
		//调用函数后：buf="valude1", len=7
		//printf("%s\n", buf);
		printf("ret=%d", ret);
		//int a = strlen(buf);
		//printf("a=%d",a);
		return 0;
}