#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	FILE* fp1=NULL;
	FILE* fp2=NULL;
	char* path1 = "hello.jpg";
	char* path2 = "mike.jpg";

	fp1 = fopen(path1,"rb");
	if (NULL == fp1)
	{
		perror("fopen fp1");
		goto END;
	}
	fp2 = fopen(path2, "wb");
	if (NULL == fp2)
	{
		perror("fopen fp2");
		goto END;
	}
	 unsigned char buf[4 * 1024];
	int len;
	while (1)
	{
		len=fread(buf, 1, sizeof(buf), fp1);
		if (len == 0)
		{
			break;
		}
		fwrite(buf, 1, len, fp2);

	}
END:
	
		if (NULL != fp1)
		{
			fclose(fp1);
		}
		if (NULL != fp2)
		{
			fclose(fp2);
		}
	
	
	return 0;
}