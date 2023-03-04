#include<stdio.h>
void print_word(char* words[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",words[i]);
	}
}
//冒泡排序
void sort_word(char* words[], int n)
{
	for (int i = n; i > 1;i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			//if (*words[j] > *words[j + 1])//比较的是words指向的内存；//不能这样写
			if (strcmp(words[j],words[j+1])>0)//比较，传的是有元素的地址，不是内存，strcmp比较的是字符串的首元素的ASCII码
			//大于返回0，大于返大于0，小于返回小于0；前和后比；
			{
				char** tmp = words[j];//这里写一个星花还是两个星花？//这里写一个星花就行，不是指向而是把tmp定义成words的同类型；
				words[j] = words[j + 1];
				words[j + 1] = tmp;

			}
		}

	}

}
int main()
{
	char* words[] = { "city", "student", "tree", "bee" };
	int n = sizeof(words) / sizeof(words[0]);

	//排序前，city student tree bee
	print_word(words, n);

	//冒泡排序
	sort_word(words, n);
	printf("hello\n");
	//排序后，bee city student tree
	print_word(words, n);

	return 0;
}
