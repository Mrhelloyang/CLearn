#include<stdio.h>
struct Student
{
	int score;
	char name[50];
	int age;

};
int main()
{
	FILE*fp=fopen("6.txt","w");
	if(NULL==fp)
	{
		perror("fopen");
		return -1;
	
	}
	int ret;
	struct Student s={59,"hello",18};
	ret=fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	return 0;
}
