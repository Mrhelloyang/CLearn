#include <stdio.h>
int main()
{
	char a, b;
	//printf("输入一个字母:\n");
	//a = getchar();
	scanf("%c",&a);
	if ((a >= 'a') && (a <= 'z')) 
	{
		b = a - 32;
		printf("%c\n", b);
	}
	else if ((a >= 'A') && (a <= 'Z')) {
		b = a + 32;
		printf("%c\n", b );
	}
	return 0;
}