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
			if (*words[j] > *words[j + 1])//比较的是words指向的内存；
			{
				char** tmp = words[j];//这里写一个星花还是两个星花？
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