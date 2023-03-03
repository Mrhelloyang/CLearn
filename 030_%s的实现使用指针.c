#include<stdio.h>
void func(char* p)
{
	int i = 0;
	while (*(p + i) != '\0')
	{
		printf("%c", *(p + i));
		i++;
	}
}
int main()
{
	char a[] = "adfadad";
	func(a);
	return 0;
}