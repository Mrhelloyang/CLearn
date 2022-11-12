#include<stdio.h>
#include<string.h>
int main()
{
	char a[101], b[101];
	gets(a);
	int n;
	n= strlen(a);
	strcpy(b,a);
	int i = 0;
	if (n == 1)
	{
		printf("1\n");
	}
	else
	{
		for (int j = n - 1; j > i; j--)
		{
			char c;
			c = b[j];
			b[j] = b[i];
			b[i] = c;
			i++;
		}

		if (strcmp(a, b) == 0)
		{
			printf("1\n");

		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}