#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "des.h"//需要调用别写好的头文件


int my_file_jiami(char*path1, char*path2)
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	fp1 = fopen(path1, "rb");
	if (NULL == fp1)
	{
		perror("fopen fp1");
		return -1;
	}
	fp2 = fopen(path2, "wb");
	if (NULL == fp2)
	{
		perror("fopen fp2");
		goto END;
	}
	//printf("nihao\n");
	unsigned char buf[4 * 1024];
	unsigned char tmp[8* 1024];
	int len;
	//int ret;
	int tmp_len=0;
	while (1)
	{
		len = fread(buf, 1, sizeof(buf), fp1);
		//printf("%d\n",len);
		if (len == 0)
		{
			break;
		}
		if (len == sizeof(buf))
		{
			DesEnc_raw(buf,len,tmp,&tmp_len);
			//fwrite(tmp, 1, tmp_len, fp2);
		}
		else
		{
			DesEnc(buf,len, tmp, &tmp_len);
		}
		fwrite(tmp, 1, tmp_len, fp2);//读多少写多少

	}

END:

	if (NULL != fp1)
	{
		fclose(fp1);
	}
	if (NULL == fp2)
	{
		return-2;
	}
	if (NULL != fp2)
	{
		fclose(fp2);
	}
	return 1;
}
int my_file_jiemi(char* path1, char* path2)
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	fp1 = fopen(path1, "rb");
	if (NULL == fp1)
	{
		perror("fopen fp1");
		return-1;
	}
	fp2 = fopen(path2, "wb");
	if (NULL == fp2)
	{
		perror("fopen fp2");
		goto END;
	}
	//printf("nihao\n");
	unsigned char buf[4 * 1024];
	unsigned char tmp[8 * 1024];
	int len;
	//int ret;
	int tmp_len = 0;
	while (1)
	{
		len = fread(buf, 1, sizeof(buf), fp1);
		if (len == 0)
		{
			break;
		}
		if (len == sizeof(buf))
		{
			DesDec_raw(buf, len, tmp, &tmp_len);
			//fwrite(tmp, 1, tmp_len, fp2);
		}
		else
		{
			DesDec(buf, len, tmp, &tmp_len);
		}
		fwrite(tmp, 1, tmp_len, fp2);

	}
END:

	if (NULL != fp1)
	{
		fclose(fp1);
	}
	if (NULL == fp2)
	{
		return -2;
	}
	if (NULL != fp2)
	{
		fclose(fp2);
	}
	return 1;
}
